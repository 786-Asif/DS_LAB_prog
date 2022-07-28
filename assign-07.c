#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*first;
void create(int a[],int n){
first=(struct node*)malloc(sizeof(struct node));
struct node*last;
first->data=a[0];
first->next=NULL;
last=first;

for(int i=1;i<n;i++){
    struct node*t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
void printlist(struct node*n){
    while(n!=0){
        printf(" %d",n->data);
        n=n->next;
    }
}
struct node* dup(struct node*n){
    while(n!=0){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n->data;
      newnode->next = dup(n->next);
    return newnode;
    }
}
void main(){
     int n;
     printf("Enter number of elements you need in a linked list\n");
     scanf(" %d",&n);
 int a[n];

 for(int i=0;i<n;i++){
    printf("Enter the element at %d position \n",i);
    scanf(" %d",&a[i]);
 }

    create(a,n);
    printf("The original linked list is:");
    printlist(first);
     printf("\nThe copied linked list is:");
    printlist(dup(first));

}