#include <stdio.h>
#include <stdbool.h>

int main() {
	// logical AND and OR

	
	int markes_C;
	int markes_P;
	int markes_M;
	scanf("%d %d %d", &markes_C, &markes_P,&markes_M);

	if(markes_C >= 80 || markes_P >= 80 || markes_M >= 80) {
		printf("You are eligele for IIT JEE\n");
	}else {
		printf("Hey  sorry bro.. try  next time\n");
	}

	return 0;
}

