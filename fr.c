#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	for(b = 1; b <= 10; b++)
	{	
		int res = a*b;

	        printf("%d * %d = %d\n",a,b,res);
	}
	return 0;
}
