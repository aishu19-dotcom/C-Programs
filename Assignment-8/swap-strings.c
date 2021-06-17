/*
Question:Write a C Program to Swap Strings
*/

#include<stdio.h>
int swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
  return 0;
}

int main()
{
  char *str1 = "aishwarya";
  char *str2 = "lakshmi";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str2, str1);
  return 0;
}
