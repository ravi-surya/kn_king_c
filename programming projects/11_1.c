#include<stdio.h>



void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
     *twenties = dollars/20;
    dollars=dollars-(*twenties*20);

    *tens = dollars/10;
    dollars=dollars-(*tens*10);

    *fives = dollars/5;
    dollars=dollars-(*fives*5);

    *ones = dollars/1;
    dollars=dollars-(*ones*1);
}


int main(void)
{

    int dollars=0,_20=0,_10=0,_5=0,_1=0;

    printf("enter a dollar amount : ");
    scanf("%d",&dollars);

    pay_amount(dollars, &_20, &_10, &_5, &_1);

   

    printf("20bills:%d\n10bills:%d\n5bills:%d\n1bills:%d ",_20,_10,_5,_1);

    return 0;
}