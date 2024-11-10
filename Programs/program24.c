#include<stdio.h>
struct Node{
	int data;
	struct *node next;
};
struct Node* addNote(struct Node* head,int data)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=head;
	return newNode;
}
void printMultiplesOf5(struct Node* head)
{
	struct node* current=head;
	while(current != NULL)	
	{
		if(current->data%5==0)
		{
			printf("%d",current->data);
		}
		current=current->next;
	}
	printf("\n");
}
int main()
{
	struct Node*head=NULL;
	head=addNode(head,5);
	head=addNode(head,10);
	head=addNode(head,15);
	head=addNode(head,20);
	head=addNode(head,25);
	printf("Multiples of 5 in linked list:");
	printMultipleOf5(head);
	struct Node* temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}
	return 0;
}
		
