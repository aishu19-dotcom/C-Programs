/*
Author: Aishwarya
Email: aishucool34@gmail.com
Problem Statement 1:1.Write a program to calculate the fuel consumption of your truck.The program should ask the user to enter the quantity of diesel to fill up the tank and the distance covered till the tank goes dry.Calculate the fuel consumption and display it in the format (liters per 100 kilometers).
Convert the same result to the U.S. style of miles per gallon and display the result. If the quantity or distance is zero or negative display ” is an Invalid Input”.
[Note: The US approach of fuel consumption calculation (distance / fuel) is the inverse of the European approach (fuel / distance ). Also note that 1 kilometer is 0.6214 miles, and 1 liter is 0.2642 gallons.]
The result should be with two decimal place.To get two decimal place refer the below-mentioned print statement :
float cost=670.23
Sample Input 1:
Enter the no of liters to fill the tank
           20
Enter the distance covered
           150
Sample Output 1:
Liters/100KM
          13.33
Miles/gallons
          17.64
*/

#include<stdio.h>
#include <stdlib.h>
 int main()
 {
   printf("Enter the no of liters to fill the tank\n");
   int ltt ; scanf("%d",&ltt);
   double lt= (ltt*1.00);

   if (ltt<1)
   {
     printf("%d is an Invalid Input\n",ltt);
     exit(0);
   }
   printf("Enter the distance covered\n");
    int diss ;
    scanf("%d",&diss);
    double dis= (diss*1.00);
    if(diss<1)
    {
      printf(" %d is an Invalid Input\n",diss);
      exit(0);
    }
    double hundred = ((lt/dis)*100);
    printf("Liters/100KM\n");
    printf("%.2f\n",hundred);
    double miles = (dis*0.6214);
    double gallons =(lt*0.2642);
    double mg = miles/gallons;
    printf("Miles/gallons\n");
    printf("%.2f\n",mg);
     return 0;
    }
