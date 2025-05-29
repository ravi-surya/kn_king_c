#include<stdio.h>


int main(void)
{
    int item,day,month,year;
    float price;

    printf("Enter item number:");
    scanf("%d",&item);

    printf("Enter unit price:");
    scanf("%f",&price);

    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit price\tPurchase Date\n");
    printf("%d\t$%-8.2f\t%.2d/%.2d/%.4d",item,price,month,day,year);//perfect
    //perfect

    return 0;
}