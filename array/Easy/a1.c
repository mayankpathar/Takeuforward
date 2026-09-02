// Given a binary array nums, return the maximum number of consecutive 1s in the array.
#include <stdio.h>

int main()
{
    int M, count = 0, k = 0;
    printf("enter the value of arr size:");
    scanf("%d", &M);
    int nums[M];
    for (int i = 0; i < M; i++)
    {
        printf("enter the value of arr element: ");
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < M; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (count > k)
            {
                k++;
            }
        }
        else
        {
            count = 0;
        }
    }

    printf("%d", k);

    return 0;
}
