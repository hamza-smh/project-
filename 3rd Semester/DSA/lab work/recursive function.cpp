#include<conio.h>
#include<stdio.h>
	int factorial(int num)
	{
		int answer=1;
		for(int t=1;t<=num;t++)
		{
			answer=answer*t;
	    }
		return (answer);
	}
main()
{
	int x;
	printf("\t\t\t\t\t\tThe Factorial of :");
	scanf("%d",&x);
  	printf("\t\t\t\t\t  The Factorial of %d is %d",x,factorial(x));
}
