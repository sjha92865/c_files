/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
void insert_at_end(int);
void traverse();

struct Node
{
    int data;
    struct Node *next;
};
struct Node *root=NULL;

void traverse()
{
    struct Node *temp;
    temp=root;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
        
    }
    printf("%d",temp->data);
}
void insert_at_end(int x)
{
    struct Node *temp;//temporary pointer
    struct Node* new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=NULL;
    if (root!=NULL)
    {
        temp=root;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
int main()
{
    
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));

    printf("enter data");
    scanf("%d",&temp->data);
    temp->next=NULL;
    root=temp;
    insert_at_end(5);
    traverse();
    return 0;
}