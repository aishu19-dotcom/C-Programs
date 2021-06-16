/*To find the grade for student subject marks with following constraints.

                 Marks Grade

                >=80 and <=100 Distinction

                >=60 and <80 First Class

                >=50 and <60 Second Class

                0>= and <50 Fail
*/

#include<stdio.h>
int main()
{
 int marks;
 printf("\n Enter Marks between 0-100 :");
 scanf("%d",&marks);
 if(marks>100 || marks <0)
 {
  printf("\n Your Input is out of Range");
 }
 else if(marks>=80)
 {
  printf("\n You got Distinction");
 }
 else if(marks>=60)
 {
  printf("\n You got First Class");
 }
 else if(marks>=40)
 {
  printf("\n You got Second Class");
 }
 else
 {
  printf("\n You got Fail");
 }
 return 0;
}
