/*
Author: Aishwarya
Program 3: Write a C Program to add 2 numbers
*/

#include<stdio.h>

int main() {
   int a, b, sum;

   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b);

   sum = a + b;

   printf("Sum : %d", sum);

   return(0);
}
