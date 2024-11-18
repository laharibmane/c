#include<stdio.h>
include<std.libh>

struct Node{
    int data;
    struct Node*next;

}
*first = NULL;
Void create( int A[],int n){
    int i;
    struct Node*t,*last;
    first=(struct node*) malloc(size of(struct node));
    first-> data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
    t=(struct Node*)malloc (size of (struct node))};
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last = t;
}
Void display()

