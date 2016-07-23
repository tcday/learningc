#include <stdio.h>

int main(void)
{
    int input_number, number_digits;

    printf("Enter a number: ");
    scanf("%d", &input_number);

    if (input_number > 0 && input_number < 10)
        number_digits = 1;
    else if (input_number > 9 && input_number < 100)
        number_digits = 2;
    else if (input_number >99 && input_number < 1000)
        number_digits = 3;
    else
        number_digits = 4;    

    printf("The number has %d digits\n", number_digits);

    return 0;
}
