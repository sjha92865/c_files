#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//swapping of two nodes at a given loc.
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
	node *p , *q, *r,*temp,*root;
	p = newNode(1);
	p->next = newNode(2);
	p->next->next = newNode(3);
	p->next->next->next = newNode(4);
	p->next->next->next->next = newNode(5);
	root=p;
	int i=1,loc=3;
	while(i<loc-1)
	{
	   p=p->next;
	    i++;
	}
	q=p->next;
	r=q->next;
	
	q->next=r->next;
	r->next=p->next;
	p->next=r;
	temp=root;
	while(temp!=NULL)
	{
	    printf("%d ",temp->data);
	    temp=temp->next;
	}
return 0;	
}