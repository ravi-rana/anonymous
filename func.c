#include<stdio.h>
int adder(int x,int y)
{
	return x+y;
}
int main()
{
	int a;
	int b;
	int res;
	scanf("%d%d",&a,&b);
	res = adder(a,b);
	printf("%d\n",res);
	return 0;
}
