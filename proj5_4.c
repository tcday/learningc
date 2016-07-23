#include <stdio.h>

int main(void)
{
    int entered_speed;

    printf("Enter your wind speed: ");
    scanf("%d", &entered_speed);

    if (entered_speed < 1)
        printf("Wind speed is Calm");
    else if (entered_speed < 4)
        printf("Wind speed is Light air");
    else if (entered_speed < 28)
        printf("Wind speed is Breeze");
    else if (entered_speed < 48)
        printf("Wind speed is Gale");
    else if (entered_speed < 64)
        printf("Wind speed is Storm");
    else
        printf("Wind speed is Hurricane");

    return 0;
}
