#include "calc.h"

int main(void)
{
    char *str = malloc(sizeof(char) * MAX_CHAR_LEN);
    printf("Please enter the numbers you want to calculate: ");
    scanf("%s", str);
    printf("You entered %s\n", str);

    inorder_to_postorder(str, 3);

    double result = calculate_answer(str);

    printf("The answer is %f\n", result);

    free(str);

    return 0;
}