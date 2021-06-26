/*
Question: Write a C program using “gets” & ”puts”
*/

#include <stdio.h>
 int main()
{
       char name[20];
       puts(" Enter your name: ");
       gets(name);

       puts(" Name: ");
       puts(name);

return 0;
}
