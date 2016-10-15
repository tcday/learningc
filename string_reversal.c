#include <stdio.h>

int main(void)
{
    char ex[5], rev[5];
    int i = 0;

    printf("Enter string: ");
    scanf("%s", ex);

    printf("%lu\n", sizeof(ex));

    for (i = 4; i >= 0; i--) {
        printf("%s\n", ex[i]);
        rev[i] = ex[i];
        printf("%s\n", rev);
        printf("%d\n", i);
    }

    printf("Reversed: %s\n", rev);

    return 0;
}
