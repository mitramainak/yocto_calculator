#include<stdio.h>
#include"headers.h"
int main()
{
	int cs;
	while(1)
	{
	printf("Select your choice\n");
	printf("1.program for addition\n");
	printf("2.program for subtraction\n");
	printf("3.program for product\n");
	printf("4.program for division\n");
	printf("5.program for modulus\n");
	printf("6.To exit \n");
	printf("Select the program option to be executed from 1-6\n");
	scanf("%d",&cs);
	switch(cs)
		{
			case 1:
				{
					add();
					break;
				}
			case 2:
				{
					sub();
					break;
				}
			case 3:
				{
					mul();
					break;
				}
			case 4:
				{
					div();
					break;
				}
			case 5:
				{
					mod();
					break;
				}
			default:
				{
					printf("Invalid options\n");
					exit(0);
				}


		}
		printf("\n\n");
}
	return 0;	
}
