/*
Question: Accept two integers as input. Perform division operation on those numbers and print
the answer with / without float type conversion.
*/

#include<stdio.h>

int main()
{
  int a,b,c;
  float f;

  printf("Enter the 1st number : ");
  scanf("%d", &a);
  printf("\n");

  printf("Enter the 2nd number : ");
  scanf("%d", &b);
  printf("\n");

  c = a/b;
  f = (float) a/b;

  printf("With Float conversion : %f \n", f);
  printf("Without Float conversion : %d \n", c);

  return 0;
}
