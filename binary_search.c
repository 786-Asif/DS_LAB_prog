#include<stdio.h>
void bin_search(int l[],int n,int item);
void main()
{
    int a[]={11,22,33,44,55,66,77,88,99};
   int item=44;
   bin_search(a,9,item);
}
void bin_search(int l[],int n,int item)
{
    int u,f,m;
    f=0;
    u=n-1;
 while(f<=u)
 {
     m=(f+u)/2;
     if(item==l[m])
     {
         printf("search is successfull %d at index",m);
         return;
     }
else if(item>l[m])

    f=m+1;

else

    u=m-1;

 }
 printf("search unsuccessfull");

}
