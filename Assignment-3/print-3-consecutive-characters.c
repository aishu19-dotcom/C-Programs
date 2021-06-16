/*
Question: Write a C program to accept a character as input and print its 3 consecutive characters as output.
*/

#include<stdio.h>

int main()
{
  char x;

  printf("Enter a Character : ");
  scanf("%c", &x);

  printf("\nThe Consecutive characters are \n%c \n%c \n%c \n", x+1, x+2, x+3);

  return 0;
}
