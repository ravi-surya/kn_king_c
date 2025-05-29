#include <stdio.h>

int main(void) {

float num,largest=0.0f;


do
{
    /* code */


    printf("enter a number: ");
    scanf("%f",&num);
    if(num>0)
    {
        if(num>largest)
        {
            largest =num;
        }
    }



} while (num>0);


printf("the largest number entered was %.2f",largest);


return 0;

    
}
