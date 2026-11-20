/*Insert an element in an array at a given position.*/
#include <stdio.h>

int main()
{
    int a[6], i, num, pos;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = 5; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;

    printf("Array after insertion:\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}