/*
Question : Write a C program to calculate profit and loss on a transaction.
*/

#include <stdio.h>
int main()
{
    int cprice,sprice, plamt;

    printf("Input Cost Price: ");
    scanf("%d", &cprice);
    printf("Input Selling Price: ");
    scanf("%d", &sprice);

    if(sprice>cprice)
    {
        plamt = sprice-cprice;
        printf("\nYou can booked your profit amount : %d\n", plamt);
    }
    else if(cprice>sprice)
    {
        plamt = cprice-sprice;
        printf("\nYou got a loss of amount : %d\n", plamt);
    }
    else
    {
        printf("\nYou are running in no profit no loss condition.\n");
    }
    return 0;
}
