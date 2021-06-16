/*
Question: Raghu and his friends (total 4 persons) work on a project and receive Rs.89507 as profit. Write a C program to accept
 the profit as input and output each person’s share as an output
*/

#include<stdio.h>

int main()
{
  int profit;
  float share;

  printf("Enter the Profit : ");
  scanf("%d", &profit);

  share = (float) profit/4;

  printf("Each team member will receive : %.3f", share);

  return 0;

}
