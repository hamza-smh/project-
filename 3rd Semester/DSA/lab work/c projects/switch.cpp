#include<conio.h>
#include<stdio.h>
main()
{
	char a,b,c,d;
	int x,y=10;
	char e;
	printf("First integer :");
	scanf("%d",&x);
	//printf("Second integer :");
	//scanf("%d",&y);
	
	printf("Select the following letter for respective task \n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	scanf("%d",&e);
	gets(&e);
//	gets(&e);
switch(e)
{
	case 'a':
		printf("%d + %d  = %d",x,y,x+y);
		break;
	case 'b':
		printf("%d - %d  = %d",x,y,x-y);
		break;
	case 'c':
		printf("%d * %d  = %d",x,y,x*y);
		break;
	case 'd':
		printf("%d / %d  = %d",x,y,x/y);
}	
}
