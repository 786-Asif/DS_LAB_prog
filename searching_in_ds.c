#include<stdio.h>
void seq_search(int m[],int n,int item)
{
  int flag = 1;
int i;
for(i=0;i<=n-1;i++)
{
    if(m[i]==item)
    {
        flag=0;
        printf("searching successful");
    }
}
    if( flag==1)
        printf("searching unsuccessful");
    

}
void main()
{
   int a[]={11,22,33,44,55,66,77,88,99,100};
   seq_search(a,10,44);
}