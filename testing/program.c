/*******************************************
* File Name : program.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 10-09-2016
* Last Modified : Sat Sep 10 23:23:01 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <stdio.h>

int main()
{
	int i;
	int j;
	int x;
	scanf("%d", &x);
	for(i = 1; i <= x; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
