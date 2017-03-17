#include<stdio.h>
int main ()
{
	int a=12;
	printf("%p\n",&a);
	printf("%d\n",*(&a));
	return 0;
}
