/*Find the longest word in a sentence.*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0, max = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
                maxStart = start;
            }

            count = 0;
            start = i + 1;
        }

        i++;
    }

    if(count > max)
    {
        max = count;
        maxStart = start;
    }

    printf("Longest word = ");

    for(i = maxStart; i < maxStart + max; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}