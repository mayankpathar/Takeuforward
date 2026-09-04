// Given a 2-D array mat where the elements of each row are sorted in non-decreasing order, and the first element of a row is greater than the last element of the previous row (if it exists), and an integer target, determine if the target exists in the given mat or not.
#include <stdio.h>

int main()
{
    int n,m;
    printf("enter the arr row size: ");
    scanf("%d", &n);
     printf("enter the arr colunms size: ");
    scanf("%d", &m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element of arr : ");
            scanf("%d", &mat[i][j]);
        }
    }
    int target,count=0;
    printf("enter the target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (target==mat[i][j])
           {
            count++;
           }
           
        }
    }
    if (count==1)
    {
       printf("true");
    }else{
        printf("false");
    }
    
    return 0;
}