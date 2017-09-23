#include<stdio.h>
float si(int x, float y,int z)
{
	return x*y*z/100.0;
}
int main()
{
	int p;
	float r;
         int y;
	 float res;
	 printf("enter principle,rate and year respec... \n");
	 scanf("%d%f%d",&p,&r,&y);
	 res = si(p,r,y);
	 printf("%f\n",res);
	 return 0;	
}
