#include <stdio.h>



void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
     while(*reduced_denominator!=0)
    {
        int rem=0;
        rem=*reduced_numerator%*reduced_denominator;
        *reduced_numerator=*reduced_denominator;
        *reduced_denominator=rem;
    }
    
  
}
int main(void) {

    int a,b,m,n;

    printf("enter a fraction: ");
    scanf("%d/%d",&a,&b);


    m=a, n=b;

    reduce(m,n,&a,&b);
     printf("greatest common divisor :%d \n",a);

    m =m/a;
    n=n/a;

    printf("In lowest terms : %d/%d",m,n);



}
