/*
Question: Write a C program for Passing string to a function.
*/

#include <stdio.h>
int displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);
    return 0;
}
int displayString(char str[])
{
    printf("String Output: ");
    puts(str);
    return 0;
}
