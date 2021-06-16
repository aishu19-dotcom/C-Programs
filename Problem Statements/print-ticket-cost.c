/*
Author: Aishwarya
Email: aishucool34@gmail.com
Problem Statement 5:In a theater, there is a discount scheme announced where one gets a 10% discount on the total cost of tickets when there is a bulk booking of more than 20 tickets, and a discount of 2% on the total cost of tickets if a special coupon card is submitted. Develop a program to find the total cost as per the scheme. The cost of the k class ticket is Rs.75 and q class is Rs.150. Refreshments can also be opted by paying an additional of Rs. 50 per member.

Hint: k and q and You have to book minimum of 5 tickets and maximum of 40 at a time. If fails display “Minimum of 5 and Maximum of 40 Tickets”.  If circle is given a value other than ‘k’ or ‘q’ the output should be “Invalid Input”.

The ticket cost should be printed exactly to two decimal places.

Sample Input 1:

Enter the no of ticket:35
Do you want refreshment:y
Do you have coupon code:y
Enter the circle:k
Sample Output 1:

Ticket cost:4065.25
Sample Input 2:

Enter the no of ticket:1
Sample Output 2:

Minimum of 5 and Maximum of 40 Tickets
*/

#include<stdio.h>

#include <stdlib.h>

int main()

{

int noTicket;

double total = 0,cost;

char ref[2], co[2] , circle[2];

printf("Enter the no of ticket:");

scanf("%d",&noTicket);

if (noTicket < 5 || noTicket > 40) {

printf("Minimum of 5 and Maximum of 40 tickets");

exit(0);

}

printf("Do you want refreshment:");

scanf("%s",&ref);

printf("Do you have coupon code:");

scanf("%s",&co);

printf("Enter the circle:");

scanf("%s",&circle);

if(circle[0]== 'k')

cost=75*noTicket;

else if(circle[0]== 'q')

cost=150*noTicket;

else

{

printf("Invalid Input");

exit(0);

}

total=cost;

if(noTicket>20)

cost= cost - ((0.1)*cost);

total=cost;

if(co[0]== 'y')

total= cost - ((0.02)*cost);

if(ref[0]== 'y')

total += (noTicket*50);

printf("Ticket cost:%.2f",total);

return 0;

}
