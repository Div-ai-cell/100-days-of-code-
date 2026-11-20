/*Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.*/
#include <stdio.h>

int main()
{
    int a[10], i, j;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        leftsum = 0;
        rightsum = 0;

        for(j = 0; j < i; j++)
        {
            leftsum = leftsum + a[j];
        }

        for(j = i + 1; j < 10; j++)
        {
            rightsum = rightsum + a[j];
        }

        if(leftsum == rightsum)
        {
            pivot = i;
            break;
        }
    }

    printf("Pivot Index = %d", pivot);

    return 0;
}
