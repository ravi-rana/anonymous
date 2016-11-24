#include<stdio.h>
int main ()
{
	int p,t,count;
	float r,si;
	for(count=1;count<=3;count++)
		{
			printf("enter principal,rate,time\n");
			scanf("%d %f %d",&p,&r,&t);
			si =p*r*t/100;
			printf("simple interest=RS %f\n",si);
		}
}
			
			
