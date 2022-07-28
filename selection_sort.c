#include<stdio.h>
void swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
void selection_sort(int arr[],int n)
{
  int i,j,min_idx;
  for(i=0;i<n;i++)
  {
    min_idx=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min_idx])
        min_idx=j;
    }

      swap(&arr[min_idx],&arr[i]);
    
  }
}
void printarray(int arr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf(" %d ",arr[i]);
  }
}
int main()
{
  int arr[]={9,7,4,8,3,6,2,11};
  int n=sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,n);
  printf("sorted array\n");
  printarray(arr,n);
}






