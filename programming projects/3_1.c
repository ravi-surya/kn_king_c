#include<stdio.h>

int main(void)
{
    int day,month,year;

    scanf("%d /%d /%d",&month,&day,&year);

    printf("%.4d%.2d%.2d",year,month,day);



    return 0;
}