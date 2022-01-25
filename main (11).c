
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



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//reverse a list
typedef struct node
{
	int data;
	struct node *link;
}node;

node *newNode(int data)
{
	node *p;
	p = (node*)malloc(sizeof(node)); 
	p->data = data;   // First node
	p->link = NULL;
	return p;  
}

int main()
{
	int len_loop;
	node *p ,*temp,*root,*prev,*curr,*next;
	p = newNode(1);
	p->link = newNode(2);
	p->link->link = newNode(3);
	
	p->link->link->link = newNode(4);
	//p->next->next->next->next = newNode(5);
	
	/*
	printf("%d",prev->data);
	printf("%d",prev->next->data);
	printf("%d",prev->next->next->data);
	printf("%d",prev->next->next->next->data);
	printf("%d",prev->next->next->next->next->data);
	//printf("%d",prev->next->next->next->next->next->data);
	*/
	root=p;
	//printf("%d \n",p->data);
	prev=root;
	curr=prev->link;
	next=curr->link;
	temp=next;
	printf("%d  %d %d %d\n",temp->data,prev->data,curr->data,next->data);
	while(temp->link!=NULL){
	    //printf("%d ",temp->data);
	    next->link=curr;
	    printf("%d next\n",next->data);
	    curr->link=prev;
	    prev->link=NULL;
	    temp=temp->link;
	    printf("%d  %d %d %d\n",temp->data,prev->data,curr->data,next->data);
	}
	prev=curr;
	curr=next;
	next=temp;
	
	next->link=curr;
	curr->link=prev;
	prev->link=NULL;
	root=next;
	
	
	//printf("%d ",root->data);
	temp=root;
	while(temp!=NULL)
	{
	    printf("%d ",temp->data);
	    temp=temp->link;
	}
	
	
return 0;	
}
