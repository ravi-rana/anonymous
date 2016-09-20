#include<stdio.h>
int main()
{
	int age;
	char nam[20];
	printf("enter your name sir\n");
	scanf("%s",nam);
	printf("enter your age sir\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("%s nice to meet you sir!!\n",nam);
		switch(age)
		{
			case 18:
			case 19:
			case 20:
			case 22:
			case 23:
			case 24:
			case 25:
			case 21:printf("%s you are now adult to be better geek\n",nam);

			break;
			case 50:
			case 51:
			case 52:
			case 53:
			case 54:
			case 55:
			case 60:printf("%s i think you are now master\n",nam);
			default:printf("%s either you are too small in age or or looser\n",nam);
			}
	}
	else
		printf("%s you are too small right now!!!!\n",nam);
		return 0;
}

                 

	


