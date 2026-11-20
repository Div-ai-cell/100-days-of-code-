/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%d", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%d is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%d is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%d is a digit.\n", ch);
    }
    else {
        printf("%d is a special character.\n", ch);
    }

    return 0;
}
