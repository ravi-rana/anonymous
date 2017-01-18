/*******************************************
* File Name : program.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 10-09-2016
* Last Modified : Sat Sep 10 23:23:01 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <iostream>

using namespace std;

int main()
{
	int i, j, x;
	cin >> x;
	for(i = 1; i <= x; i++) {
		for(j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}
