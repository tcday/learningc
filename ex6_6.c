#include <stdio.h>

int main(void)
{
    int i;

    i = 1;
    while (i <= 128) {
        printf("%d\n", i);
        i *= 2;
    }

    for (i = 1; i <= 128; i *= 2) {
        printf("%d\n", i);
    }

    for (i = 1; i <= 128; ) {
        printf("%d\n", i);
        i *= 2;
    }

    return 0;
}
