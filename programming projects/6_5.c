#include <stdio.h>

int main(void) {

int a;

printf("enter a number : ");
scanf("%d",&a);

do
{
  int rem=a%10;

 printf("%d",rem);
    a= a/10;

} while (a!=0);

}