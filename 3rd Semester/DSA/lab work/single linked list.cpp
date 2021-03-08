#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	float GPA;
	struct Node *next;
};

int main()
{
	int z=41;
	float x = 3.78;
	
	struct Node* head= NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    
head = (struct Node*)malloc( sizeof ( struct Node ));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

head-> data = z;
head-> next = second;
second->data = x;
second->next = third;

printf("Roll No. = %d\n",z);
printf("GPA = %0.2f",x);
}
