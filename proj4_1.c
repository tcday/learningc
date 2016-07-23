#include <stdio.h>

int main(void)
{
    int entered_num, first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &entered_num);

    second_digit = entered_num % 10;
    first_digit = entered_num / 10;

    printf("The reversal is: %d%d\n", second_digit, first_digit);

    return 0;
}
