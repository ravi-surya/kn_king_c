#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false},digit_repeated[10]={false} ;
    int digit;
    long n;


    printf("enter a number :");
    scanf("%ld",&n);
    printf("Repeated digits: ");

    while (n>0)
    {
        /* code */
        digit=n%10;
        if(digit_seen[digit])
            digit_repeated[digit]=true; ;

        digit_seen[digit]=true;
        n/=10;

    }

    for(int i=0;i<10;i++)
    {
        if(digit_repeated[i]== true)
        {
            printf(" %d",i);
        }
    }
    





}