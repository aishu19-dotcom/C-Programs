/*
Author: Aishwarya
program 1: Write a C Program to take multiple inputs from the user and display them.
*/
#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
    return 0;
}
