#include <stdio.h>

int main(void)
{
    float x;

    x = 1001.1;

    printf("%-8.1e|%10.6e|%-8.3f|%6.0f|\n", x, x, x, x);

    return 0;
}
