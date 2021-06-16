/*
Author: Aishwarya
What will be the output of this program ?

Option – 1. No, compile error but it’ll print Advance Four-time.

Option – 2. No, compile error but it will run into an infinite loop printing Advance.

Option – 3. No, compile error but it’ll print Advance Five-time

Option – 4. Compile-time error.
*/


#include<stdio.h>

int main()
{
  int i = 1,j;

  for(;;)
  {
    if(i)
      j = --i;

    if(j<5)
    {
      printf("advance ", j++);
    }
    else
      break;

  }

  return 0;
}
