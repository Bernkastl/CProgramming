#include <stdio.h>

int main(void)
{
    int speed;
    printf("enter a wind speed (in knots): ");
    scanf("%d", &speed);

    printf("Description: ");
    if (speed < 1)
        printf("Calm");
    else if (speed <= 3)
        printf("Light Air");
    else if (speed <= 27)
        printf("Breeze");
    else if (speed <= 47)
        printf("Gale");
    else if (speed <= 63)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}
