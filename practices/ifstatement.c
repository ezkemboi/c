#include <stdio.h>

int main()
{
    int price;
    printf("Please input your price: \n");
    scanf("%d", &price);
    /* Make sure only integer are entered */
    if (price != sizeof(int))
        printf("The value to input should be integer. \n");
    else if (price < 10)
        printf("I am a number less than ten\n");
    else if (price == 10)
        printf("I am ten\n");
    else
        printf("I am a number greator than ten\n");
    return 0;
}