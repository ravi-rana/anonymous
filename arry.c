#include<stdio.h>
int main()
{
	int a[50];
	for(int i=1;i<=50;i++)
	{
		int j =i-1;
		a[j]=i*i;
		printf("%d\n",a[j]);
	}
	return 0;
}
