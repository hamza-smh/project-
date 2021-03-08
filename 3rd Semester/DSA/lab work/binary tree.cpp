#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* newNode(int d)
{
	struct Node* Node = (struct Node*)malloc(sizeof(struct Node));
	Node->data = d;
	Node->left = NULL;
	Node->right = NULL;
	return(Node);
};

int main()
{
	int z=41;
	
struct Node* root= newNode(100);

root-> left = newNode(40);
root-> right = newNode(60);

root->left->left=newNode(10);
root->left->right=newNode(30);

root->right->right=newNode(20);
root->right->left=newNode(40);

printf("\t\t\t\t\t %d\n\n\n",root->data);

printf("\t\t\t %d",root->left->data);
printf("\t\t\t\t%d\n\n\n",root->right->data);

printf("\t\t%d",root->left->left->data);
printf("\t\t%d",root->left->right->data);

printf("\t\t%d",root->right->left->data);
printf("\t\t%d",root->right->right->data);


}
