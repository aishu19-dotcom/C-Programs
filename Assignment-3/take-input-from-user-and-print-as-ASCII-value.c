/*
Question: Accept character as an input from the user. Print the corresponding ASCII value as output.
*/

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
