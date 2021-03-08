#include<conio.h>
#include<stdio.h>
main()
{
	//function with return type and argument
	int a=1,b=2;
	printf("The sum of %d and %d is %d",a,b,Sum(a,b));
}
int Sum(int a, int b)
{
	return a+b;
}
