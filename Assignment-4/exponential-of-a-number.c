/*
Question: Write a program to find the Exponential of a given number
*/


#include<stdio.h>
 #include<conio.h>
 int main()
 {
       double term=1,expo=1;
       float x;
       int i;
       printf("Enter the exp Value of x: ");
       scanf("%f",&x);
       for(i=1;term>=0.00001;i++)
           {
              term *= x/i;
              expo+=term;
           }
              printf("\Our Exp=%f %f\n",x,expo);
              return 0;
 }
