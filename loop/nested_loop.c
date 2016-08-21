/*******************************************
* File Name : nested_loop.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 22-08-2016
* Last Modified : Mon Aug 22 00:17:10 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <stdio.h>

int main(){
	int i, j;
	printf("printing table of 1 to 10\n");
	for(i = 1; i <= 10; i++) {
		//this outer loop takecare of table number
		for(j = 1; j <= 10; j++) {
			//inner loop actually create table for that number
			printf("%d\t", i * j);
		}
		printf("\n");
	}

	return 0;

}

