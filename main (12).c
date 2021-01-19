/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
void inorder_traverse();
void create_add(int);
typedef struct Node
{
    struct Node* left;
    int data;
    struct Node* right;
}node;
node *root=NULL;

void inorder_traverse(node* t)
{
    if(t->left){
        inorder_traverse(t->left);
    }

    printf("%d->",t->data);
    if(t->right){
        inorder_traverse(t->right);
    }
    
}
void create_add(int data)
{
    //creation
    node *new_node,*prev,*temp;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    
    temp=root;
    if (root==NULL)
    {
        root=new_node;
        
    }
    else
    {
        prev=temp;
        while(temp!=NULL)
        {
            prev=temp;
            if(data<=temp->data)
            {
                temp=temp->left;
                
                //last step at which insertion happens
                if(temp==NULL)
                {
                    prev->left=new_node;
                }
            }
            else
            {
                temp=temp->right;
                
                //last step at which insertion happens,added to right side
                if(temp==NULL)
                {
                    prev->right=new_node;
                }
            }
        }
    
        
    }
    
}

int main()

{
    printf("Hello World");
    create_add(30);
    create_add(10);
    inorder_traverse(root);
    //printf("%d->",root->data);
    //printf("%d->",root->left->data);
    return 0;
}
