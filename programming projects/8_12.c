#include<stdio.h>
#include<ctype.h>

int main(void)
{
     char c;
     int sum=0;
     int a[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                 1, 4, 4, 8, 4, 10};
    printf("Enter a word: ");
    while ((c = toupper(getchar())) != '\n') {
       sum+=a[c-65];
    }

    printf("scarabble value : %d",sum);

    return 0;
}