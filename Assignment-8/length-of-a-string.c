/*
Question: Write a C program to find the length of a String without using function strlen()
*/

#include <stdio.h>
int main() {
    char s[] = "C Programs";
    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i);
    return 0;
}
