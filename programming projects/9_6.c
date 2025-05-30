#include <stdio.h>

int poly(int x);

int main()
{

    int x;
    scanf("%d", &x);
    int p = poly(x);
    printf("%d", p);
}

int poly(int x)
{
    int y=(3*x*x*x*x*x)+(2*x*x*x*x)+(5*x*x*x)+(x*x)+(7*x)-6;

    return y;
}