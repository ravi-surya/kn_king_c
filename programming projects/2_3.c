#include<stdio.h>

int main(void)
{
    int r;
    float volume;
    scanf("%d",&r);
    volume = (4.0f/3.0f)*((22.0f/7.0f)*r*r*r);

    printf("%f\n",volume);
    return 0;
}