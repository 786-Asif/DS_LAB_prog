#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linkedlisttraversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("elements: %d\n" ,ptr->data);
        ptr = ptr->next;
    }

}

struct node* inseratfirst(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}

int main()
{
    struct node* head;
    struct node*second;
    struct node* third;
    struct node*forth;

head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
forth=(struct node *)malloc(sizeof(struct node));

head->data = 55;
head->next = second;

second->data = 66;
second->next = third;

third->data = 77;
third->next = forth;

forth->data = 88;
forth->next = NULL;

linkedlisttraversal(head);
printf("\n");
 head=inseratfirst(head,22);
 linkedlisttraversal(head);

return 0;

}







