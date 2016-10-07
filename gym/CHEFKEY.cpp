#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int t;
	int a, b, c;
	cin >> t;
	while(t--) {
		int res = 0;
		cin >> a >> b >> c;
		for(int i = max(a, b); i >= 1; i--) {
			if(c%i == 0 && (c/i) <= min(a, b)) {
				res++;
			}
		}

		cout << res << endl;
	}
	return 0;
}	
