#include<stdio.h>

int main(void)
{
    int i,r,n;
    printf("enter two digit number :");//358
    scanf("%d",&i);
    r=i%10;//8

    i=i/10;//35

    n=i%10;//5
    i=i/10;//3
    printf("%d%d%d",r,n,i);


}