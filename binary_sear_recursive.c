#include<stdio.h>
int binary_search(int a[],int x, int low, int high)
{ 
    if(low>high)
    {
        return -1;
        
    }
    int mid=low+(high-low)/2;
    if(a[mid]==x)
    {
      return mid;
    }
    if(a[mid]<x)
    {
        return binary_search(a,x,mid+1,high);
    }
    if(a[mid]>x)
    {
        return binary_search(a,x,low,mid-1);
    }
    
}
int main()
{
    int a[]={2,3,4,6,8,9,10};
    int x=8;
    int n=sizeof(a)/sizeof(a[0]);
    int result= binary_search(a,8,0,n-1);
    printf("index no: %d", result);
    return 0;
}