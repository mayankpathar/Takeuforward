// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1
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
    int target;
    int index = -1;

    printf("Enter the target value: ");
    scanf("%d", &target);

    for (int i = 0; i < M; i++) {
        if (target == nums[i]) {
            index = i;
            break;
        }
    }

    printf("%d", index);
    
    
}