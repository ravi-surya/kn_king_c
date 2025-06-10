#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main()
{
    char c;
    int operand1,operand2,result;
  while (true) {
        printf("Enter an RPN expression: ");

        // Loop to process characters of a single RPN expression
        // The leading space in "%c" tells scanf to skip whitespace (spaces, tabs, newlines)
        while (scanf(" %c", &c) == 1) { // == 1 checks if scanf successfully read a character
            if (c >= '0' && c <= '9') {
                push(c - '0'); // Convert character digit to integer and push
            } else if (c == '+') {
                operand2 = pop(); // Pop order: second operand first
                operand1 = pop(); // Then first operand
                push(operand1 + operand2);
            } else if (c == '-') {
                operand2 = pop();
                operand1 = pop();
                push(operand1 - operand2);
            } else if (c == '*') {
                operand2 = pop();
                operand1 = pop();
                push(operand1 * operand2);
            } else if (c == '/') {
                operand2 = pop();
                operand1 = pop();
                // Basic division error handling (optional, but good practice)
                if (operand2 == 0) {
                    printf("Error: Division by zero\n");
                    exit(EXIT_FAILURE);
                }
                push(operand1 / operand2);
            } else if (c == '=') {
                // When '=' is encountered, display the result
                if (is_empty()) { // Check for underflow before popping result
                    stack_underflow(); // Should ideally have one result
                }
                result = pop();
                printf("Value of expression: %d\n", result);
                
                // After displaying, the stack should be empty for the next expression
                // (Though a perfectly valid RPN expression should leave only one item on the stack
                // so subsequent pops would lead to underflow. Clearing is a good habit here.)
                make_empty(); 
                
                // Break out of the inner loop to prompt for the next expression
                break; 
            } else {
                // If a non-operator/non-operand (like 'q') is entered, terminate program
                printf("Exiting RPN Calculator.\n");
                return 0; // Exit main function
            }
        }
    }

    return 0;
    return 0;
}
void make_empty(void){top = 0;}
bool is_empty(void){return top == 0;}
bool is_full(void){return top == STACK_SIZE;}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}
void stack_overflow(void)
{
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}
void stack_underflow(void)
{
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}