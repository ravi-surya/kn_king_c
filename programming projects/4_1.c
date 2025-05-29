#include<stdio.h>

int main(void)
{
    int i,r;
    printf("enter two digit number :");//35
    scanf("%d",&i);
    r=i%10;//5
    i=i/10;//3
    printf("%d%d",r,i);


}
