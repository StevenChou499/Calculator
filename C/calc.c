#include "calc.h"

// convert the user input inorder expression into postorder
void inorder_to_postorder(char *expression, unsigned int length);

// calculate the actual answer via the post-order expression
result_t calculate_answer(char *post_expression);