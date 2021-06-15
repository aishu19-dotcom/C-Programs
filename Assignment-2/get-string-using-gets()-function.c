/*
Author: Aishwarya
Program 6: Write a C program to read a string using gets() function and print it on the screen using printf() function.
*/

#include<stdio.h>
void main ()
{
    char s[30];
    printf("Enter the string? ");
    gets(s);
    printf("You entered %s",s);
}  
