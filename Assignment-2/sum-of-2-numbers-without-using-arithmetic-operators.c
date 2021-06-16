/*
Author:Aishwarya
Question 9: Write a C program to take multiple inputs (with different data types)
 from the user using only one scan statement and perform an addition without using + operator
 */

 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,i; 
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    for(i=0; i<num2; i++){
   num1++;
    }
printf("Sum of two numbers : %d ",num1);
    return 0;
}
