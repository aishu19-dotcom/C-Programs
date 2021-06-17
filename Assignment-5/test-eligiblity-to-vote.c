/*
Question : Write a C program to read the age of a candidate and determine whether it is eligible for
casting his/her own vote.
*/

#include <stdio.h>
int main()
{
  int vote_age;

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible to caste your vote.\n");
       printf("You would be able to caste your vote after %d year.\n",18-vote_age);
     }
  else
     printf("Congratulation! You are eligible for casting your vote.\n");
}
