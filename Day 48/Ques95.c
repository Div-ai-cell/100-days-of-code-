/*Check if one string is a rotation of another.*/
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j, k, len1 = 0, len2 = 0, flag;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    while(a[len1] != '\0')
        len1++;

    while(b[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        printf("Not Rotation");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        flag = 1;

        for(j = 0; j < len1; j++)
        {
            k = (i + j) % len1;

            if(a[k] != b[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not Rotation");

    return 0;
}