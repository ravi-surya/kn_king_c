
/*
   my SOLUTION 
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int digit_seen[10] = {0};
    int digit_repeated[10]={0} ;
    int digit;
    long n;


    printf("enter a number :");
    scanf("%ld",&n);
    printf("digit: 0 1 2 3 4 5 6 7 8 9 \n");

    while (n>0)
    {
       
        digit=n%10;
        
        if(digit_seen[digit])
            digit_repeated[digit]++; ;
        
        digit_seen[digit]=1;
        n/=10;

    }
    for (int  i = 0; i < 10; i++)
    {
        if(digit_repeated[i]>0)
        {
            digit_seen[i]=digit_repeated[i]+1;
        }
    }
    
    printf("Occurances: ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",digit_seen[i]);
    }
    





}




*/

#include <stdio.h>

int main(void) {

    int digit, i, occurrences[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }
    
    printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:\t");

    for (i = 0; i < 10; i++) {
            printf("%2d ", occurrences[i]);
    }
    printf("\n");
    return 0;
}