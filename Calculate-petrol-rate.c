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
   }4
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
    printf("%.2f\n",mg); return 0; }
