/*
Author: Aishwarya
Program 4: Write a C program to read and print using getchar() and putchar() function?
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf ("\n Enter a character \n");
    c = getchar();
    printf(" You have passed ");
    putchar(c);

    return 0;
}
