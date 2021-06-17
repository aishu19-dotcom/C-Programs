/*
Question : Write a C program for the following pattern.
          1
        1   2
      1       3
    1           4
  1               5
1                   6
1   2   3   4   5   6   7

*/

#include <stdio.h>
int main() {
    int n,space1,space2,i,j;
    printf("Enter a positive number");
    scanf("%d",&n);
    printf("\n");
    space1 = (n-1)*2;
    for (i=1; i<n; i++)
    {
        for (j =1;j<= space1; j++)
           printf(" ");
        printf("1");
        if (i != 1)
        {
        space2 = (i-1)*3 + (i-2);
        for (j= 1;j<=space2;j++)
         printf(" ");
        printf("%d",i);
        }
        space1 = space1 - 2;
        printf("\n");
    }
    for (i=1;i<=n;i++)
        printf("%d   ",i);
    printf("\n");
    return 0;
}
