#include<stdio.h>

int main(void)
{
    int n;
    printf("enter a number between 0 to 32767: ");
    scanf("%d",&n);
    printf("In octal, your number is: %d%d%d%d%d\n", 
        (n/4096)%8, //0
        (n/512)%8, //3
        (n/64)%8, //6
        (n/8)%8,//4
        n%8);//1
        //found this on the internet a very nice solution 

}