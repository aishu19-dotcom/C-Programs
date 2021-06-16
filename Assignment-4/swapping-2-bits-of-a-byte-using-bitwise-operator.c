/*
Question: Write a c program to swapping two bits of a byte using bitwise operators.
*/


#include<stdio.h>
int swapBits(unsigned int n, unsigned int p1, unsigned int p2)
{
    unsigned int bit1 =  (n >> p1) & 1;
    unsigned int bit2 =  (n >> p2) & 1;
    unsigned int x = (bit1 ^ bit2);
    x = (x << p1) | (x << p2);
       two sets are swapped;
    unsigned int result = n ^ x;
}
int main()
{
    int res =  swapBits(28, 0, 3);
    printf("Result = %d ", res);
    return 0;
}
