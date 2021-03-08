#include<conio.h>
#include<stdio.h>
main()
{
	int a[12]={44,33,11,55,77,90,40,60,99,22,88,66},x=0,i,j;

int flag=0;	
do{
	flag=0;	
		for(i=0;i<12;i++)
		{
			if(a[i]>a[i+1])
			{
		      x=a[i];
		 	  a[i]=a[i+1];
		 	  a[i+1]=x;
		 	  flag=1;
		   }
		}
	}
	while(flag==1);
	for(int j=0;j<12;j++)
	{
		printf("%d ,",a[j]);
	}
}
