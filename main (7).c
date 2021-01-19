/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge two sorted array
//yeh v chal rha hai code.
#include <stdio.h>
#include<stdlib.h>
void sort();
struct Node *create1(struct Node*,int);
void merge(struct Node*,struct Node*);
void traverse(struct Node*);

struct Node
{
    int data;
    struct Node* next;
};
struct Node *root1=NULL;
struct Node *root2=NULL;
void merge(struct Node *p,struct Node *q)
{
 struct Node* s;//node
    s=(struct Node*)malloc(sizeof(struct Node));
    struct Node *s_root=NULL;
 while(p&& q)
 {
    if(p->data<=q->data)
    {
        if(s_root==NULL)
        {
            s_root=p;
            p=p->next;
            s=s_root;
            printf("%d 1s",s->data);
        }
        else
        {
            s->next=p;
            s=s->next;
            printf("%d 2nd",s->data);
            p=p->next;
        }
    }
    else
    {
        if(s_root==NULL)
        {
            s_root=q;
            q=q->next;
            s=s_root;
            printf("%d 3rd",s->data);
        }
        else
        {
            s->next=q;//linking
            s=s->next;//actual  moving of that pointer.
            printf("%d 4th",s->data);
            q=q->next;
        }
    }
    
 }
 printf("merge");
 traverse(s_root);
 
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
    one->data=10;
    one->next=NULL;
    root1=one;
    
    two->data=20;
    two->next=NULL;
    root2=two;
     
    for(int i=0;i<=2;i++)
    {
        int key;
        //created a dummy node.to skip that ->next->next vla thing.
        printf("enter elements in 1st node");
        scanf("%d",&key);//key=data
        create1(one,key);
        
    }
    
    for(int i=0;i<=2;i++)
    {
        int key;
        //created a dummy node.to skip that ->next->next vla thing.
        printf("enter elements in 2nd node");
        scanf("%d",&key);//key=data
        create1(two,key);
        
    }
    printf("traverse first list\n");
    traverse(root1);
    printf("\n");
    printf("traverse 2nd list\n");
    traverse(root2);
    printf("\n");
    merge(root1,root2);

    
    
    
    
    return 0;
}

