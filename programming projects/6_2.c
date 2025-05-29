#include <stdio.h>

int main(void) {

int a,b;


printf("enter two integers: ");
scanf("%d %d",&a,&b);

while(b!=0)
{
    int rem=0;
    rem=a%b;
    a=b;
    b=rem;
}

printf("greatest common divisor :%d",a);


}