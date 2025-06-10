#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define STACK_SIZE 100



char contents[STACK_SIZE]={0};
int top=0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

bool is_matching_pair(char left, char right) {
    return (left == '(' && right == ')') ||
           (left == '{' && right == '}');
}

int main()
{
    char c;
    bool properly_nested=true;


    printf("enter parentheses and/or braces : ");
   while((c=getchar())!='\n')
   {
    if(c=='(' || c=='{')
    {
        push(c);
    }
    if(c==')' || c=='}')
    {
        if(is_empty())
        {
            properly_nested=false;
            break;
        }
        else{
        char j = pop();
            if(!is_matching_pair(j,c))
            {
                properly_nested =false;
                break;
            }
         }
}
    
   }
   if(!is_empty())
   {
    properly_nested =false;
   }

   if(properly_nested)
   {
    printf("parentheses are nested properly ");
   }
   else 
   {
    printf("paratntheses are NOT  nested properly");
   }


    return 0;
}


void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(char i)
{
     if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
char pop(void)
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