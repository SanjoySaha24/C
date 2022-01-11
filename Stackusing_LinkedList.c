#include<stdio.h>
#include<stdlib.h>
void push();
void pop();

struct node
{
	int val;
	struct node *next;
};
struct node *head;

void main()
{
	int choice=0;
	
	while (choice!=3)
	{
		printf("\n1.PUSH\n2.POP\n3.EXIT");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
			break;
			
			case 2:pop();
			break;
			
			case 3:exit;
		}
	}
}

void push()
{
	int val;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Not able to push the element");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&val);
		if(head==NULL)
		{
			ptr->val=val;
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
	}
}

void pop()
{
	int item;
	struct node *ptr;
	if(head==NULL)
	{
		printf("Underflow");
	}
	else
	{
		item=head->val;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Item popped");
	}
}
