#include<conio.h>
#include<stdio.h>
main()
{
	int a ,b ,c;
	printf("Enter no. : ");
	scanf("%d",&a);
	c=a;
	for(b=1;b<a;b++)
	{
		c=c*b;
	}
	printf("Factorial of %d is %d",a,c);
}
