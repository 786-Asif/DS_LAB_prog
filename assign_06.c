#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node*next;

    };
    struct node*head,*newnode,*temp;
    head=0;int n;
    printf("enter the total number of data in linked list");
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
       
        
    }
    
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
   
   
}