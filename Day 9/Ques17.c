//Write a program to find the roots of a quadratic equation and categorize them#include <stdio.h>
#include <stdio.h>

int main()
{
    float a, b, c, d, r1, r2;
    int s;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        for(s = 0; s*s <= d; s++);

        s--;

        r1 = (-b + s) / (2*a);
        r2 = (-b - s) / (2*a);

        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2*a);

        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", r1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }

    return 0;
}