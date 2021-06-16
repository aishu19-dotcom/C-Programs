/*
Question: The Caesar Cipher technique is one of the earliest and simplest methods of encryption technique. It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions down the alphabet. For example with a shift of 1, A would be replaced by B, B would become C,
 and so on. Write a C program to get a character asinput and print its corresponding cipher (use 3 as shift key).
*/

#include<stdio.h>

int main()
{
  char x, encrypt;
  int shift_key = 3;

  printf("Enter a Character: ");
  scanf("%c", &x);

  encrypt = x + shift_key;

  printf("Encrypted Code : %c", encrypt);

  return 0;
}
