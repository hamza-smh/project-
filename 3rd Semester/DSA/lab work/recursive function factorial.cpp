#include<conio.h>
#include<stdio.h>
	int factorial(int num)
	{
		int answer;
		if (num==1)
		{
			return 1;
		}
		else
		{
			answer = factorial(num-1)*num;
		}
		return (answer);
	}
main()
{
	int x;
	printf("\t\t\t\t\t\tThe Factorial of :");
	scanf("%d",&x);
  	printf("\t\t\t\t\t\t The Factorial of %d is %d",x,factorial(x));
}
