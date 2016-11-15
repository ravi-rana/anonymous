#include <stdio.h>
//https://www.codechef.com/problems/FLOW001

int Addbyme(int simple1, int simple2) {
	return simple1 + simple2;
}
int tablesum(int number) {
	int sum = 0;
	int i;
	for(i =  0; i <= 10; i++) {
		printf("%d\n", number * i);
		sum += (number * i);
	}
	return sum;
}

int main()

	int z;
	z = tablesum(2);
	printf("sum = %d\n", z);
	z = tablesum(12);
	printf("sum = %d\n", z);
}


