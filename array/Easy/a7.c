// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.
#include <stdio.h>

int main()
{
    int k, n;

    printf("Enter size of arr1: ");
    scanf("%d", &k);

    printf("Enter size of arr2: ");
    scanf("%d", &n);

    int nums1[k], nums2[n];

    printf("Enter arr1 elements:");
    for (int i = 0; i < k; i++)
    {
        printf("Enter arr1 elements:");
        scanf("%d", &nums1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter arr2 elements:");
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0;

   

    while (i < k && j < n)
    {
        int value;

        if (nums1[i] < nums2[j])
        {
            value = nums1[i];
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            value = nums2[j];
            j++;
        }
        else
        {
            value = nums1[i];
            i++;
            j++;
        }

        printf("%d ", value);

        while (i < k && nums1[i] == value)
            i++;

        while (j < n && nums2[j] == value)
            j++;
    }

    while (i < k)
    {
        if (i == 0 || nums1[i] != nums1[i - 1])
            printf("%d ", nums1[i]);
        i++;
    }

    while (j < n)
    {
        if (j == 0 || nums2[j] != nums2[j - 1])
            printf("%d ", nums2[j]);
        j++;
    }

    return 0;
}