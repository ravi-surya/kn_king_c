#include<stdio.h>

int main(void)
{
    int d, il, i2, i3, i4, i5, jl, j2, j3, j4, j5,first_sum, second_sum, total;

    printf("enter the 11 digit number : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d, &il, &i2, &i3, &i4, &i5, &jl, &j2, &j3, &j4,&j5);
    first_sum = d + i2 + i4 + jl + j3 + j5;
    second_sum = il + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

}