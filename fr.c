#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int b=1;b<=10;b++)
	{
		int b=a*b;
	        printf("%d*%d=%d\n",a,b,b);
	}
	return 0;
}
