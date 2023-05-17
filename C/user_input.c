#include "calc.h"

int main(void)
{
    char *str = malloc(sizeof(char) * MAX_CHAR_LEN);
    printf("Please enter the numbers you want to calculate: ");
    scanf("%s", str);
    printf("You entered %s\n", str);

    free(str);

    return 0;
}