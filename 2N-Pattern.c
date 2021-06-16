/*
Author: Aishwarya
Question 10:Programming Pattern to Print 2*N Number of rows for input Pattern?

3
44
555
6666
555
44
*/

#include<stdio.h>

int main()
{
  int i, j;
  int n;

  printf("Enter a number : ");
  scanf("%d", &n);

  for (i = 1; i<= 2*n - 1; i++)
  {
    if(i <= n)
      for (j = 1; j <= i; j++)
        printf("%d  ", i+2);

    else
      for (j = 1; j <= 2*n - i; j++)
        printf("%d  ", 2*n-i+2);

      printf("\n");
  }
}
