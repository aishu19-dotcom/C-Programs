/*
Question: Write a C program using arithmetic Operators.
*/

#include<stdio.h>

int main()
{
 int a = 12, b = 3;
 int addition, subtraction, multiplication, division, modulus;

 addition = a + b;
 subtraction = a - b;
 multiplication = a * b;
 division = a / b;
 modulus = a % b; 

 printf("Addition of two numbers a, b is : %d\n", addition);
 printf("Subtraction of two numbers a, b is : %d\n", subtraction);
 printf("Multiplication of two numbers a, b is : %d\n", multiplication);
 printf("Division of two numbers a, b is : %d\n", division);
 printf("Modulus of two numbers a, b is : %d\n", modulus);

}
