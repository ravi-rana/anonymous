#include <stdio.h>
//https://www.codechef.com/problems/FLOW001
int main()
{
	int t;
	int a, b;
	scanf("%d", &t);
        t--;
	do{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);	
	}while(t--);

	return 0;

}
