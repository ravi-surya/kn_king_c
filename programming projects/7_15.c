#include <stdio.h>

int main(void) {
    

    int num,fact=1;

    printf("enter a positive number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        fact *=num;
        num-=1;
    }

    printf("factorial : %d",fact);
}