// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.
#include <stdio.h>

int main() {
    int M;

    printf("Enter the array size: ");
    scanf("%d", &M);

    int nums[M];

    for (int i = 0; i < M; i++) {
        printf("Enter array element: ");
        scanf("%d", &nums[i]);
    }

    int largest = nums[0];
    int secondLargest = -1;

    for (int i = 1; i < M; i++) {

        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest &&
                 (secondLargest == -1 || nums[i] > secondLargest)) {
            secondLargest = nums[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}