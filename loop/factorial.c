/*******************************************
* File Name : factorial.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 16-09-2016
* Last Modified : Fri Sep 16 14:30:21 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <stdio.h>

int main()
{
	int number;
	int i;
	int result = 1;
	scanf("%d", &number);
	for(i = 1; i <= number; i++) {
		result *= i;
	}
	printf("Factorial of %d is %d\n", number, result);

	return 0;
}
