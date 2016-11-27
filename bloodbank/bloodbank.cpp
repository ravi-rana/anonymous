#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;

class BloodBank{
	public:
		map<string, int> capacity;
		BloodBank();
		~BloodBank(){}
		void update();
	
};

class Customer{
	public:
	string name, bloodGroup, contactNumber, customerType;
	int bloodUnits;
};

int main()
{
	BloodBank bb;
	ofstream off("log.txt");
	int i = 5;
	cout<<"Name BloodGroup ContactNumber CustomerType(donor/buyer) Unit\n";
	while(i--){
		Customer c;
		cin>>c.name>>c.bloodGroup>>c.contactNumber>>c.customerType>>c.bloodUnits;
		off<<c.name<<" "<<c.bloodGroup<<" "<<c.contactNumber<<" "<<c.customerType<<" "<<c.bloodUnits<<endl;	
		if(c.customerType == "donor"){
			bb.capacity[c.bloodGroup] += c.bloodUnits;	
		}
		else if(c.customerType == "buyer"){
			bb.capacity[c.bloodGroup] -= c.bloodUnits;
		}
		bb.update();
	}

	return 0;
}

BloodBank::BloodBank()
{
	string bloodInfo = "inventory.txt";
	ifstream ifs(bloodInfo);
	string line;
	while(getline(ifs,line)){
		stringstream sst(line);
		string bgroup;
		sst >> bgroup;
		int bunit;
		sst >> bunit;

		capacity[bgroup] = bunit;
	}
	update();
}

void BloodBank::update()
{
	ofstream off("inventory.txt");
	map<string, int>::iterator it = capacity.begin();
	for(; it != capacity.end(); it++){
		off<<it->first<<" "<<it->second<<endl;
	}	
}

