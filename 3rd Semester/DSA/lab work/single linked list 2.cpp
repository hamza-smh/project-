#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	char name;
	float GPA;
	struct Node *next;
};

int main()
{
	int z=41;
	//char x[5] = 'Hamza';
	float x = 3.78;
//	printf("Enter first Value : ");
//	scanf("%d",&z);
//	printf("Enter second Value : ");
//	scanf("%c",&x);
//	printf("Enter third Value : ");
//	scanf("%f",&c);
	
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
//third->data = ;
printf("Roll No. = %d\n",z);
printf("GPA = %0.2f",x);
}
