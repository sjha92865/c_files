
/*******************************************************************************/
//merge two sorted array
//yeh v chal rha hai code.
#include <stdio.h>
#include<stdlib.h>
void sort();
struct Node *create1(struct Node*,int);
void merge(struct Node*);
void traverse(struct Node*);

struct Node
{
    int data;
    struct Node* next;
};
struct Node *root1=NULL;
struct Node *root2=NULL;
void merge(struct Node *list)
{
 struct Node* p;//node
 struct Node* q;
 p=list;
 q=list->next;
 printf("%d->",p->data);
 printf("%d->",q->data);
 while(q->next!=NULL)
 {
 printf("%d->",p->data+p->next->next->data);
 p=q;
 q=q->next;
}
}
struct Node *create1(struct Node* temp1, int key)//ptr
{
    struct Node *newNode,*temp;
    int data=key;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link the data part
        newNode->next = NULL; 

        temp = temp1;

        // Traverse to the last node
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

}
}

void traverse(struct Node *root)
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

int main()
{
    //trying two create two link list.
    printf("Hello World\n");
    struct Node* one;
    struct Node* two;
    one=(struct Node*)malloc(sizeof(struct Node));
    two=(struct Node*)malloc(sizeof(struct Node));
    one->data=1;
    one->next=NULL;
    root1=one;
    
    two->data=20;
    two->next=NULL;
    root2=two;
     
    for(int i=0;i<=3;i++)
    {
        int key;
        //created a dummy node.to skip that ->next->next vla thing.
        printf("enter elements in 1st node");
        scanf("%d",&key);//key=data
        create1(one,key);
        
    }
    printf("traverse first list\n");
    traverse(root1);
    printf("\n");
    merge(root1);

    
    
    
    
    return 0;
}


