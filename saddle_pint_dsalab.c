#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int findSaddlePoint(int mat[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Find the mini elemt of row.& colm index

        int min_row = mat[i][0], colm_indx = 0;
        for (int j = 1; j < n; j++)
         {
            if (min_row > mat[i][j])
            {
                min_row = mat[i][j];
                colm_indx = j;
            }
        }
 
        // noww check min. elemnt of row is max of colmn
        int k;
        for (k = 0; k < n; k++)

        // colm_ind is fixed

            if (min_row < mat[k][colm_indx])
                break;
 
        // If saddle point is present 

        if (k == n)
        {
           printf("Value of Saddle Point %d",min_row);
           return 1;
        }
          }
 
    return -1;
}
 
int main()
{
    int mat[MAX][MAX] = {{1, 2, 3},
                        {4, 5, 6},
                        {5, 8, 9}};
    int n = 3;
    if (findSaddlePoint(mat, n) == -1)
       printf("No Saddle Point ");

    return 0;
}
