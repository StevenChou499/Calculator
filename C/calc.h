#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CHAR_LEN 100

// typedef struct result {
//     enum number_mode num_mode;
//     double d_answer;
//     long   l_answer;
// } result_t;

enum number_mode {
    NOT_A_NUMBER   = 0,
    INTEGER        = 1,
};

// parse the user inputed expression
unsigned int parse_expression(char *expression);

// convert the user input inorder expression into postorder
void inorder_to_postorder(char *expression, unsigned int length);

// calculate the actual answer via the post-order expression
double calculate_answer(char *post_expression);
