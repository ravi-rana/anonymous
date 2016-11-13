#include <stdio.h>

int main()
{
	int markes = 90;
	printf("please enter your marks\n");
	scanf("%d", &markes);
	if(markes >= 60) {
		printf("1st divison........\n");
	}else if(markes >= 45){
		printf("2nd div  ........\n");
	}else if(markes > 33){
		printf("3nd div  ........\n");
	} else {
		printf("fail\n");
	}



	return 0;
}


