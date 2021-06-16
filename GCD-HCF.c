/*
Author: Aishwarya
Question 9:The Highest Common Multiple or the Greatest Common Divisor is the greatest number that exactly divides both numbers. It is possible to calculate this number through simple mathematical calculations. The following algorithm shows how the GCD of two numbers is calculated.

Ex:-

the H.C.F or G.C.D of 12 and 14 is 2.

The H.C.F or G.C.D of 16 and 12 is 4
*/

#include<stdio.h>

int GCD(int a, int b)
{
  if(a==b)
    return(a);
  else if (a>b)
    return GCD(a-b,b);
  else
    return GCD(a, b-a);
}

int main()
{
  int test1, test2;

  printf("Enter 2 numbers : ");
  scanf("%d %d", &test1, &test2);

  int ans = GCD(test1,test2);

  printf("The HCF or GCD of %d and %d is %d.", test1, test2, ans);

  return 0;
}
