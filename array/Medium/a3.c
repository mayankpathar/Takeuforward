// Given an M * N matrix, print the elements in a clockwise spiral manner.



// Return an array with the elements in the order of their appearance when printed in a spiral manner.
#include<stdio.h>

int main(){
     int n,m,k=0;
    printf("enter the arr row size: ");
    scanf("%d", &n);
     printf("enter the arr colunms size: ");
    scanf("%d", &m);
    int mat[n][m],clockwisespiral[m+n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element of arr : ");
            scanf("%d", &mat[i][j]);
        }
    }
    
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            clockwisespiral[k++] = mat[top][j];
        }
        top++;

        
        for (int i = top; i <= bottom; i++)
        {
            clockwisespiral[k++] = mat[i][right];
        }
        right--;


        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                clockwisespiral[k++] = mat[bottom][j];
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                clockwisespiral[k++] = mat[i][left];
            }
            left++;
        }
    }

  

    for (int i = 0; i < k; i++)
    {
        printf("%d ", clockwisespiral[i]);
    }

    
    
    return 0;
}