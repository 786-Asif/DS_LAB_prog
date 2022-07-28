#include<stdio.h>
#include<stdlib.h>
int pop(int *stack,int *top)
{
    if((*top)==-1)
    {
        printf("underflow condition");
        return -1;
    }
    int out= stack[(*top)];
    *(top)=*(top)-1;
    return out;
}
void push(int *stack ,int *top,int value,int max)
{
    *(top)=*(top)+1;
    if((*top)>max)
    {
        printf("overflow condition");
        *(top)=*(top)-1;
        return;
    }
    stack[*(top)]=value;
}
void print(int stack[],int top)
{
    for(int i=0;i<=top;i++){
        printf("%d,",stack[i]);
    }
    printf("\n");
}
int main(){
    int max , top;
    max=10;
    top=-1;
    int s1[max];
    push(s1,&top,10,max);
    push(s1,&top,12,max);
    push(s1,&top,14,max);
    push(s1,&top,16,max);
    print(s1,top);
    printf("%d\n",pop(s1,&top));
    print(s1,top);
}