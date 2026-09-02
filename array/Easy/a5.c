// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.
#include <stdio.h>

int main()
{
    int m, k = 0;
    printf("enter the value of arr size:");
    scanf("%d", &m);
    int nums[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter the value of arr element: ");
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (k <= m)
        {
            for (int j = 0; j < m; j++)
            {
                if (nums[j] == k)
                {
                    k++;
                    
                }
            }
        }
    }
  
        printf("%d", k);
    
    return 0;
}