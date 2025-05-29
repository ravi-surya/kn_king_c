#include<stdio.h>

int main(void)
{
     
    float loan,
    rate,ratepermonth,
    monthlypay;

    printf("enter loan: ");
    scanf("%f",&loan);

    printf("enter rate: ");
    scanf("%f",&rate);

    printf("enter monthlypay: ");
    scanf("%f",&monthlypay);
    
    ratepermonth= (rate/100.0f)/12.0f;
   
    loan=loan-monthlypay+(loan*ratepermonth); 
    

    printf("balance after first payment : %.2f\n",loan);

    loan=loan-monthlypay+(loan*ratepermonth);

    printf("balance after second payment : %.2f\n",loan);

    loan=loan-monthlypay+(loan*ratepermonth);

    printf("balance after third payment : %.2f\n",loan);
    return 0;
}