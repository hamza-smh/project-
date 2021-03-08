#include<conio.h>
#include<stdio.h>
main()
{
	int units,Total_bill;
	printf("Number of units : ");
	scanf("%d",&units);
	if(units>=0 && units<=100)
	{
		Total_bill =units *8;
		printf("Total bill is : %d",Total_bill);
	}
	else
	{
		Total_bill =units * 12;
		printf("Total bill is : %d",Total_bill);
	}
}
