/*Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int main()
{
    int a[6], i, num, pos = 5;

    printf("Enter 5 elements in sorted order:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(num < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = 5; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;

    printf("Array after insertion:\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
