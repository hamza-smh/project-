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
	float a=fans*100;
    float b=bulb*40;
    float c=tubelight*80;
    float d=a+b+c;
    printf("Total Energy consumed = %d Watts",d);
    float e= d/1000;
    printf("\nTotal Energy consumed in kW = %0.1f",e);
     
}
