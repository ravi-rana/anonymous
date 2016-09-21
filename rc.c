/*******************************************
* File Name : rc.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 19-09-2016
* Last Modified : Mon Sep 19 01:46:44 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	for(b = 1; b <= 10; b++){	
		printf("%d %d\n", a, b) ;
		int b = a*b;
		printf(" res =  %d\n", b);													        //printf("%d*%d=%d\n",a,b,b);
	}
		return 0;
	}
