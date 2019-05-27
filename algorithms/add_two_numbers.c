// Algorithm to add two numbers
#include <stdio.h>
#include <ctype.h>

int main()
{
    int x, y, sum;
    printf("Please enter your first number: ");
    scanf("%d", &x);
    printf("Please enter the second number: ");
    scanf("%d", &y);
    sum = x + y;
    printf("The sum of the two numbers is: %d \n", sum);
    return 0;
}
