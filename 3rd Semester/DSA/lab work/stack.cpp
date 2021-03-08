#include<conio.h>
#include<stdio.h>
#define MAX 50
void insert();
void delet();
void display();
void exit();
int stack[MAX],top=-1,element;
main()
{
	int ch;
	do{
		printf("\n\n\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\n\tEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
			    delet();
				break;
			case 3:
				display();
		        break;
			case 4:
				return 0;
			default:
			printf("\nInvalid entry.\nPlease try again....");	
		}
	}
	
	while(ch!=4);
	getch();
}

void insert()
{
	if(top==MAX-1)
	{
		printf("\n\nStack is full.");
	}
	else
	{
		printf("Enter Element :");
		scanf("%d",&element);
		top++;
		stack[top]= element;
		printf("\n\nElement Inserted=%d",element);
	}
}
void delet()
{
	if(top==-1)
	{
		printf("\n\nStack is Empty.");	
	}
	else
	{
		element=stack[top];
		top--;
		printf("\n\n Element Deleted = %d",element);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
	printf("\n\nStack is empty");
    }
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}

