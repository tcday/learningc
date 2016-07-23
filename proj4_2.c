#include <stdio.h>

int main(void)
{
    int entered_num, first_sum, first_digit, second_digit, third_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &entered_num);

    third_digit = entered_num % 10;
    first_sum = entered_num / 10;
    first_digit = first_sum / 10;
    second_digit = first_sum % 10;

    printf("The reversal is: %d%d%d\n", third_digit, second_digit, 
        first_digit);

    return 0;
}
