#include<conio.h>
#include<stdio.h>
main()
{
	int fans,tubelight,bulb;
	printf("No. of Fans: ");
	scanf("%d",&fans);
	printf("No. of Bulb: ");
	scanf("%d",&bulb);
    printf("No. of Tubelight: ");
	scanf("%d",&tubelight);
	int a=fans*100;
    int b=bulb*40;
    int c=tubelight*80;
    int d=a+b+c;
    printf("Total Energy consumed = %d Watts",d);
    float e= d/1000;
    printf("\nTotal Energy consumed in kW = %0.1f",e);
     
}
