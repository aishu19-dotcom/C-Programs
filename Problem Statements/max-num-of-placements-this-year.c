/*
Author: Aishwarya
Email: aishucool34@gmail.com
Problem Statement 4:– FOE college wants to recognize the department which has succeeded in getting the maximum number of placements for this academic year. The departments that have participated in the recruitment drive are CSE,ECE, MECH. Help the college find the department getting maximum placements. Check for all the possible output given in the sample snapshot

Note : If any input is negative, the output should be “Input is Invalid”. If all department has equal number of placements, the output should be “None of the department has got the highest placement”.

Sample Input 1:

· Enter the no of students placed in CSE:90

· Enter the no of students placed in ECE:45

· Enter the no of students placed in MECH:70

Sample Output 1:

· Highest placement

CSE
*/
#include<stdio.h>

#include <stdlib.h>

int main()

{

int cse;

       int ece;

       int mech;

printf("Enter the no. of students placed in CSE: ");

scanf("%d",&cse);

 printf("Enter the no. of students placed in ECE: ");

scanf("%d",&ece);

printf("Enter the no. of students placed in MECH: ");

scanf("%d",&mech);

       if (cse < 0 || ece < 0 || mech < 0)

       {

           printf("Input is Invalid\n");

       }
        else

        {

         if (cse == ece && ece == mech && mech==cse)

         {

          printf("None of the department has got the highest placement\n");

        }
        else if (cse == ece && cse > mech)
        {
printf("Highest Placement:\n");
printf("CSE\n");
printf("ECE\n");
     }
     else if (cse == mech && cse > ece)
       {
printf("Highest Placement:\n");
printf("CSE\n");
printf("MECH\n");
      }
       else if (ece == mech && ece > cse)
        {
printf("Highest Placement:\n");
printf("ECE\n");
printf("MECH\n");
     }
      else if (cse > ece && cse > mech)

       {

printf("Highest Placement:\n");

printf("CSE\n");

      }

       else if (ece > mech)

       {

printf("Highest Placement:\n");

printf("ECE\n");

       }

       else

       {

printf("Highest Placement:\n");

printf("MECH\n");

       }

    }

    return 0;

}
