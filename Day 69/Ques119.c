/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>

int main()
{
    int arr[100], count[100] = {0};
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        count[arr[i]]++;

        if(count[arr[i]] == 2)
        {
            printf("Repeated element = %d", arr[i]);
            return 0;
        }
    }

    return 0;
}
