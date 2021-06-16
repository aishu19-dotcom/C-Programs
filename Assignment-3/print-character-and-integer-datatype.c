/*
Question:Accept an integer and a character as inputs. Add the integer to the character variable
and output the result in character and integer data type.
*/

#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("You entered: %d", number);

    return 0;
}
