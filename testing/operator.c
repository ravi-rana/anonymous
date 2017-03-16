#include <stdio.h>

int main()
{
	//AND means pass all conditions
	//OR means pass anyone of them
	
	int a = 10, b = 12, c = 0;
	int ans = ( ( a > 5 && c ));
	printf("%d\n", ans);

	return 0;
}

