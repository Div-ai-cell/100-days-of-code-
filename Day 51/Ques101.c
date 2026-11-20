/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/
#include <stdio.h>

int main()
{
    int nums[10], target;
    int i, first = -1, last = -1;

    printf("Enter 10 sorted elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < 10; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d %d", first, last);

    return 0;
}