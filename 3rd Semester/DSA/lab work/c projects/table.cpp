#include<conio.h>
#include<stdio.h>
main()
{
	int a;
	printf("Enter no. ");
	scanf("%d",&a);
	for(int b=1;b <=20;b++)
	{
		printf("%d * %d = %d\n",a,b,a*b);
	}
}
