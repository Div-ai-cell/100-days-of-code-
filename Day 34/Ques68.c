/*Delete an element from an array.*/
#include <stdio.h>

int main()
{
    int a[5], i, pos;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    printf("Array after deletion:\n");

    for(i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}