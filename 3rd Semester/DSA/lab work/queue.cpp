#include<conio.h>
#include<stdio.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
void exit();
int queue[MAX],head=0,tail=0,element;
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
				enqueue();
				break;
			case 2:
			    dequeue();
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

void enqueue()
{
	if(head>MAX)
	{
		printf("\n\nQueue is full.");
	}
	else
	{
		printf("Enter Element :");
		scanf("%d",&element);
		tail++;
		queue[tail-1]= element;
		printf("\n\nElement Inserted=%d",element);
	}
}
void dequeue()
{
	if(head==tail)
	{
		printf("\n\nQueue is Empty.");
		head=0;
		tail=0;
			
	}
	else
	{
		element=queue[head];
		head=head+1;
		printf("\n\n Element Deleted = %d",element);
	}
}
void display()
{
	int i;
	if(head==tail)
	{
	printf("\n\nQueue is Empty");
    }
	else
	{
		for(i=head;i<tail;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}

