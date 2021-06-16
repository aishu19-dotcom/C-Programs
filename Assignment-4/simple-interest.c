/*
Question:Write a C program to find out the Simple Interest by getting Principal amount, Interest rate and duration from
the user like following and display output as following.
*/
#include <stdio.h>

int main()
{
 float principle, rate, sinterest;
 int time;

 printf("Enter Principle Amount, Rate %% per Annum and Time\n");
 scanf ("%f %f %d", &principle, &rate, &time);

 sinterest = (principle * rate * time)/ 100.0;

 printf ("Principle Amount = %5.2f\n", principle);
 printf ("Rate %% per Annum   = %5.2f%\n", rate);
 printf ("Time   = %d years\n", time);
 printf ("Simple Interest  = %5.2f\n", sinterest);
}
