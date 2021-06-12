/*
Author: Aishwarya
Email: aishucool34@gmail.com
Problem Statement 2:Vohra went to a movie with his friends in a Wave theatre and during  break time he bought pizzas, puffs and cool drinks. Consider the following prices : 
Rs.100/pizza
Rs.20/puffs
Rs.10/cooldrink
Generate a bill for What Vohra has bought.
Sample Input 1:
Enter the no of pizzas bought:10
Enter the no of puffs bought:12
Enter the no of cool drinks bought:5
Sample Output 1:
Bill Details
No of pizzas:10
No of puffs:12
No of cooldrinks:5
Total price=1290
*/
#include<stdio.h>

#include <stdlib.h>

int main()
{
int totalprice;
printf("Enter the no of pizzas bought:\n");
int pizza ;
scanf("%d",&pizza);
printf("Enter the no of puffs bought:\n");
int puffs;
scanf("%d",&puffs);
printf("Enter the no of cool drinks bought:\n");
int coolDrinks ;
scanf("%d",&coolDrinks);
int pizzaa =pizza*100;
int puffss =(puffs)*20;
int coolDrinkss =(coolDrinks)*10;
printf("Bill Details\n");
printf("No of pizzas: %d\n",pizza);
printf("No of puffs: %d\n",puffs);
printf("No of cooldrinks: %d\n",coolDrinks);
totalprice = pizzaa+puffss+coolDrinkss;
printf("Total price= %d\n",totalprice);
rintf("ENJOY THE SHOW!!!");
return 0;
}
