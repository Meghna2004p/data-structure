#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};
struct Node *header=NULL;
struct Node *CreateNode(int data)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->link=NULL;
	return(newnode);
}
void insertAtFront(int data)
{
	struct Node *newnode;
	newnode=CreateNode(data);
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}
}
void insertAtEnd(int data)
{
	struct Node *newnode;
	struct Node *ptr;
	ptr=header->link;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	newnode=CreateNode(data);
	newnode->data=data;
	newnode->link=NULL;
	ptr->link=newnode;
}
void traversal()
{	
	struct Node*ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
}
void deletionAtFront()
{
	struct Node*ptr;
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		ptr=header;
		header=header->link;
		free(ptr);
	}
}
void deletionAtEnd()
{
	struct Node *ptr;
	struct Node *ptr1;
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		ptr=header;
		while(ptr->link!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr1->link=NULL;
		free(ptr);
	}
}
int main()
{
	struct Node *node;
	insertAtFront(10);
	insertAtFront(20);
	insertAtEnd(30);
	deletionAtFront();
	deletionAtEnd();
	
	traversal();
	return(0);
}

