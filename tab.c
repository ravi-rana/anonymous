#include<stdio.h>
int main ()
{
	int a;
	int b;
	int c=0;
	for(a=2;a<=10;a++)
	{
		for(b=1;b<=10;b++){
			c=a*b;
			printf("%d,",c);
		}

		printf("\n..............\n");
	}
	return 0;
}
