#include <stdio.h>

int main(void)
{
    int entered_num, num1, num2, num3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("%d%d%d", num3, num2, num1);

    return 0;
}
