/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge two sorted array
//yeh chal rha hai code.
#include <stdio.h>
#include<stdlib.h>
void sort();
struct Node *create1(struct Node*);
struct Node *create2(struct Node*);
void traverse(struct Node*);

struct Node
{
    int data;
    struct Node* next;
};
struct Node* root1=NULL;
struct Node* root2=NULL;
struct Node *create1(struct Node* temp)//ptr
{
    //struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data in 1st node");
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}
struct Node *create2(struct Node* temp1)//ptr
{
    //struct Node* temp1;
    temp1=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data in 2nd node");
    scanf("%d",&temp1->data);
    temp1->next=NULL;

    return temp1;
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
   
    /* 2nd*/   one->next=create1(one);//kya mtlb huya iska yahi huya ki jaise tum a=2,kyuki "one" v to ek variable hi to hai.
    
    //one->next=create1(one);//a=5
    /* 3rd*/    one->next->next=create1(one);
    //one->next=create1(one);//a=7
    /* 4th*/    one->next->next->next=create1(one);
    /* 2nd*/    two->next=create2(two);//a=9but aesa thode na soach k kr rhe the
    /* 3rd*/    two->next->next=create2(two);
    //to bhai baat yeh hai ki tm jo krna chah rhe the one->next->next=create2()
    //ya
    

    printf("traverse first list\n");
    traverse(root1);
    printf("\n");
    printf("traverse 2nd list\n");
    traverse(root2);
    
    
    
    return 0;
}

