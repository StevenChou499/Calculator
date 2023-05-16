#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR_LEN 100

int main(void)
{
    char *str = malloc(sizeof(char) * MAX_CHAR_LEN);
    printf("Please enter the numbers you want to calculate: ");
    scanf("%s", str);

    free(str);

    return 0;
}