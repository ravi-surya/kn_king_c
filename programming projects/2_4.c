#include<stdio.h>

int main(void)
{

float amount,after_tax=0.0 ;
scanf("%f",&amount);

after_tax = ((5.0f/100.0f)*amount)+ amount;



printf("%f",after_tax);
    return 0;
}