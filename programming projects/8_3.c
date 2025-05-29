#include <stdbool.h> /* C99 only */
#include <stdio.h>
int main(void)
{   

    int digit,input;
    long n; 
 
    do
    {
        bool digit_seen[10] = {false};
        printf("Enter a number: "); 
        scanf("%ld", &n);
        
        long d =n;
        while(d>0)
        {
            digit=d%10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            d/=10;

        }
        if(d>0)
            printf("repeated digit \n");

        else
            printf("no repeated digit \n");
        

    }while(n!=0);

    return 0;

}