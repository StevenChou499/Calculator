#include "calc.h"

// convert the user input inorder expression into postorder
void inorder_to_postorder(char *expression, unsigned int length)
{
    char operator[50]; // stores +, -, *, /
    char operand[50];  // stores all the numbers
    unsigned int operator_index = 0U;
    unsigned int operand_index = 0U;

    char post_expression[50];
    unsigned int post_exp_index = 0U;

    while (*expression) {
        switch (*expression) {
            case '+':
            case '-':
            case '*':
            case '/':
                post_expression[post_exp_index] = operand[operand_index];
                post_exp_index++;
                operand_index--;
                post_expression[post_exp_index] = *expression;
                post_exp_index++;
                break;
            default:
                operand[operand_index] = *expression;
                operand_index++;
                break;
        }
        expression++;
    }
}

// calculate the actual answer via the post-order expression
double calculate_answer(char *post_expression)
{
    double result = 0;
    unsigned int post_index = 0U;

    while (*post_expression) {
        switch (*post_expression) {
            case '+':
                result += *post_expression;
                post_index++;
                break;
            case '-':
                result += *post_expression;
                post_index++;
                break;
            case '*':
                result *= *post_expression;
                post_index++;
                break;
            case '/':
                result /= *post_expression;
                post_index++;
                break;
            default:
                result = *post_expression;
                post_index++;
                break;
        }
    }
    return result;
}