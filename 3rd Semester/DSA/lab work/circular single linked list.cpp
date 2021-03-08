#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	
	struct Node *next;
};

int main()
{
	int z=41,x=9,y=22;
	
	struct Node* head= NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    
head = (struct Node*)malloc( sizeof ( struct Node ));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

head-> data = x;
head-> next = second;

second->data = y;
second->next = third;

third->data = z;
third->next = head;

printf("x = %d\n",x);
printf("y = %d\n",y);
printf("z = %d",z);
}
