//search element in unsorted array
#include<stdio.h>
int searchelemt(int a[],int key, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
            return -1;
    }
}
int main()
{
   int a[] ={10,12,14,16,18,20};
   int n=sizeof(a)/sizeof(a[0]);
   int key=16;
   int result=searchelemt(a,key,n);
   if(result==-1)
   {
       printf("element not found");
   }
   else
   printf(" element at index %d",result);
   
   return 0;
}

