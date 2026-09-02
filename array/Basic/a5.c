
#include <stdio.h>

int main() {
    int M;

    scanf("%d", &M);

    int nums[M];

    for (int i = 0; i < M; i++) {
        scanf("%d", &nums[i]);
    }

    int first = nums[0];

    for (int i = 0; i < M - 1; i++) {
        nums[i] = nums[i + 1];
    }

    nums[M - 1] = first;

    for (int i = 0; i < M; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}