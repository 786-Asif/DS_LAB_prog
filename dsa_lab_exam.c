#include<stdio.h>
#include<stdlib.h>

int saddlepoint(int mat[10][10], int n)
{
    int i,j;
    int min_row;
    for(i=0;i<n;i++)
    {
        // finding min.indx of row & colm also
        int row=mat[i][0],column_idx=0;
        for(j=1;j<n;j++)
        {
            if(min_row >mat[i][j])
            {
                min_row=mat[i][j];
                column_idx=j;
            }
        }

      // now check min. elemnt of row is max of colmn
        int k;
        for(k=0;k<n;k++)
       // colm idx is fixed
        {
           if (min_row < mat[k][column_idx])
                break;

        // if saddle point present in row 
                if (k == n)
        {
           printf("Value of Saddle Point %d",min_row);
           return 1;
        }
          
        }

    }
    return -1;

}

int main()
{
    int mat[10][10]={{ 3,4,6},
                     { 4,5,7},
                     { 5,7,9}};
    int n =3;
   if(saddlepoint(mat,n)==-1);
   printf("no saddle point");
   return 0;
}                







