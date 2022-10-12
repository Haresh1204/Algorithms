#include <iostream>
#include<stdlib.h>

using namespace std;

struct node 
{
    int data;
    struct node *next;
};

struct node *create(int data)
{
    struct node*a;
    a=(struct node*)malloc(sizeof(struct node));
    a->data=data;
    a->next=NULL;
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
   struct node*p1=create(10);
   struct node*p2=create(11);
   struct node*p3=create(12);
   struct node*p4=create(13);
   
   p1->next=p2;
   p2->next=p3;
   p3->next=p4;
   p4->next=NULL;

display(p1);
    return 0;
}
