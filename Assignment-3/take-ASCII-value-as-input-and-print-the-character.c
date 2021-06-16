/*
Question: Accept ASCII value as an input from the user. Print the corresponding character as output.
*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a ASCII value(0 to 255)");
	scanf("%d",&num);
	printf("Equivalent Character: %c",num);
	return  0;
}
