#include<stdio.h>

int main(void)
{
    int r=10;
    float volume;
    volume = (4.0f/3.0f)*((22.0f/7.0f)*r*r*r);

    printf("%f is the volume of the sphere\n",volume);
    return 0;
}