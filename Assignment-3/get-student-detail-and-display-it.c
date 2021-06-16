/*
Question: Write a program to get the students detail and display it.
*/

#include<stdio.h>
#include<string.h>

int main()
{
  char name[20], reg_no[15], spec[10], dept[5];
  char sec;

  printf(" Name : ");
  gets(name);

  printf("\n Register Number : ");
  scanf("%s", reg_no);

  printf("\n Department :");
  scanf("%s", dept);

  printf("\n Specialization : ");
  scanf("%s", spec);

  printf("\n Section : ");
  scanf("\n");
  scanf("%c", &sec);

  printf("\n\nStudent Details \n\t Name\t : %s \n\t Reg No\t : %s \n\t Class\t : %s %s ", name, reg_no, dept, spec);
  putchar(sec);

  return 0;
}
