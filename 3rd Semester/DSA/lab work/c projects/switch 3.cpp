#include<conio.h>
#include<stdio.h>
main()
{
	int a;
	printf("Press 1 for Your name x5 \nPress 2 for Your University name x10 Press 3 for Mindstorm x10");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			for(int x=1;x<5;x++)
			{
			printf("%d.My name is Hamza\n",x);
	        }
	        break;
	    case 2:
			for(int y=1;y<10;y++)
			{
			printf("%d.Dawood University\n",y);
	        }
	        break;
	        
	    case 3:
		    for(int z=1;z<10;z++)
			{
			printf("%d.Mindstorm\n",z);
	        }
	        break;	        
	}
}
