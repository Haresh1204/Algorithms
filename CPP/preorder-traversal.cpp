#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* crenode(int data)
{
    struct node* a;
    a=(struct node*)malloc(sizeof(struct node));
    a->data=data;
    a->left=NULL;
    a->right=NULL;
}

void preorder(struct node *s)
{
    if(s!=NULL)
    {
        cout<<" "<<s->data;
        preorder(s->left);
        preorder(s->right);
    }
}

int main()
{
    struct node* p= crenode(52);
    struct node* p1= crenode(62);
    struct node* p2= crenode(92);
    struct node* p3= crenode(72);
    struct node* p4= crenode(82);
    
    p->left=p1;
    p->right=p2;
    p1->right=p4;
    p1->left=p3;
    
    preorder(p);

    return 0;
}

