#include<conio.h>
#include<stdio.h>
main()
{
int marks;
printf(" Marks Achieved : ");
scanf("%d",&marks);
if(marks>=80)
{
	printf("You have acheived A+ grade");
}
else if(marks<80 && marks>=70)
{
	printf(" You have acheived A grade");
}
else if(marks<70 && marks>=60)
{
	printf(" You have acheived B grade");
}
else 
{
	printf(" Nalley ho tum");
}}
