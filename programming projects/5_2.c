#include<stdio.h>

int main()
{
    int hours,mins;

    printf("Enter a 24-hour time :");
    scanf("%d:%d",&hours,&mins);

    if(hours>12)
    {
        hours-=12;
        printf("Equivalent 12-hour time: %d:%d PM",hours,mins);
    }
    else if(hours<12)
    {
        printf("Equivalent 12-hour time: %d:%d AM",hours,mins); 
    }
    else 
    {
        printf("Equivalent 12-hour time: 12:00 PM");
    }


}