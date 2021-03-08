#include<conio.h>
#include<stdio.h>
int main()
{
	printf("Selection Sort\n");
	int a[9]={22,20,38,55,45,33,50,66,50},i,j,x;
	for(i=0;i<9;i++)
	{
	  for(j=i+1;j<9;j++)
	  {
	  	if(a[i]>a[j])
	  	{
	  	  x=a[i];
		  a[i]=a[j];
		  a[j]=x;	
		}
	  }
	}
printf("The no. are sorted ! \n");
for(i=0;i<9;i++)
printf("%d , ",a[i]);
}


