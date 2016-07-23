#include <stdio.h>

int main(void)
{
    int GS1_prefix, group_id, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &group_id, &publisher_code,
        &item_number, &check_digit);

    printf("GS1 prefix: %d\n)", GS1_prefix);
    printf("Group identified: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
