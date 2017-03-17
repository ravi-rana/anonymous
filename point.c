#include<stdio.h>
int main()
{
	int x=23;
	int *b=&x;
	printf("%d\n",*b);
	printf("%p\n",b);
        printf("%p\n",&x);
	return 0;
}


