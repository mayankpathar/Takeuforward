// Given an integer array nums, return a list of all the leaders in the array.

//     A leader in an array is an element whose value is strictly greater than all elements to its right in the given array.
//     he rightmost element is always a leader.The elements in the leader array must appear in the order they appear 
//     in the nums array.
#include<stdio.h>

int main(){
    int m,k=1;
    printf("enter the value of arr size:");
    scanf("%d", &m);
    int nums[m],rlaegest[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter the value of arr element: ");
        scanf("%d", &nums[i]);
    }
    int n=nums[m-1];
    rlaegest[0]=n;
    for (int i = m-2; i>=0; i--)
    {
        if (nums[i]>n)
        {
            n=nums[i];
            rlaegest[k]=n;
            k++;
        }
        
    }
    for (int i = k-1; i >=0; i--)
    {
        printf("%d",rlaegest[i]);
    }
    

    return 0;
}