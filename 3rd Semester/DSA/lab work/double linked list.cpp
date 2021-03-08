#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data1,data2,data3;
	struct Node *next;
	struct Node *prev;
};

int main()
{
	int x = 41;
	int y = 378;
	int z = 78;
	
	struct Node* head= NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

head -> data1 = x;
head-> next = second;
head-> prev = NULL;

second->data2 = y;
second->next = third;
second->prev = head;

third->data3 = z;
third->next = NULL;
third->prev = second;

printf("Data 1 = %d\n",x);
printf("Data 2 = %d\n",y);
printf("Data 3 = %d",z);
}
