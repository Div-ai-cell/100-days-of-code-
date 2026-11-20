/*Print initials of a name with the surname displayed in full.*/
#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    printf("%c. ", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            last = i + 1;

            if(name[last] != '\0')
                printf("%c. ", name[last]);
        }
    }

    printf("\b\b");

    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}