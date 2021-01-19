
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//reverse a list
typedef struct node
{
	int data;
	struct node *next;
}node;

node *newNode(int data)
{
	node *p;
	p = (node*)malloc(sizeof(node)); 
	p->data = data;   // First node
	p->next = NULL;
	return p;  
}

int main()
{
	int len_loop;
	node *p , *d,*temp,*root,*prev,*curr;
	p = newNode(1);
	p->next = newNode(2);
	p->next->next = newNode(3);
	//p->next->next->next = newNode(4);
	//p->next->next->next->next = newNode(5);
	root=p;
	prev=root;
	curr=root->next;
	temp=curr->next;
	int i=0;
	while(temp)
	{
	 temp=curr->next;
	 curr->next=prev;
	 if(i==0)
	 {
	     i++;
	     prev->next=NULL;
	     
	 }
	 else
	 {
	 prev->next=root;
	 }
	 
	 root=prev;
	 prev=curr;
	 curr=temp;
	}
	/*
	printf("%d",prev->data);
	printf("%d",prev->next->data);
	printf("%d",prev->next->next->data);
	printf("%d",prev->next->next->next->data);
	printf("%d",prev->next->next->next->next->data);
	//printf("%d",prev->next->next->next->next->next->data);
	*/root=prev;
	
	
	
	temp=root;
	while(temp!=NULL)
	{
	    printf("%d ",temp->data);
	    temp=temp->next;
	}
return 0;	
}