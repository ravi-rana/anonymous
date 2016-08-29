/*******************************************
* File Name : simple_array.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 29-08-2016
* Last Modified : Mon Aug 29 21:41:27 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <stdio.h>

int main(){
	int arr[10] = {1, 2}; //array of integer, size 10 (0.....9) 
	int j;
	for(j = 0; j < 10; j++) {
		printf("%d\t", arr[j]);
	}
	printf("\n");

	return 0;
}


