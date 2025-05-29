    #include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2,result_num, result_denom;
    char c;

    printf("Enter two fractions separated by a operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1,&c, &num2, &denom2);


    

    

    switch (c)
    {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
         printf("The sum is %d/%d\n", result_num, result_denom);
        break;

    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The subtraction is %d/%d\n", result_num, result_denom);
        break;
        
    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The multiplication is %d/%d\n", result_num, result_denom);
        break; 
        
    case '/':
    result_num = num1 * denom2;
    result_denom = num2 * denom1;
        printf("The division is %d/%d\n", result_num, result_denom);
        break;    
    
    default:
    printf("illegal operation \n",c);
        break;
    }

    
    


    return 0;
}
