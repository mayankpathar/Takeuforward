// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
#include <stdio.h>

int main()
{
    int m;
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
        if (nums[i] == nums[i + 1])
        {
            for (int j = i; j < m; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[m - 1] = NULL;
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d", nums[i]);
    }

    return 0;
}