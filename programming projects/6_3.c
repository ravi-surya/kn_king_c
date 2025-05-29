#include <stdio.h>

int main(void) {

    int a,b,m,n;


    printf("enter a fraction: ");
    scanf("%d/%d",&a,&b);
    m=a, n=b;
    while(b!=0)
    {
        int rem=0;
        rem=a%b;
        a=b;
        b=rem;
    }
    
    printf("greatest common divisor :%d \n",a);

    m =m/a;
    n=n/a;

    printf("In lowest terms : %d/%d",m,n);



}
