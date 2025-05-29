#include<stdio.h>

int main(void)
{

    int dollors=0,_20=0,_10=0,_5=0,_1=0;

    scanf("%d",&dollors);

    _20 = dollors/20;
    dollors=dollors-(_20*20);

    _10 = dollors/10;
    dollors=dollors-(_10*10);

    _5 = dollors/5;
    dollors=dollors-(_5*5);

    _1 = dollors/1;
    dollors=dollors-(_1*1);

    printf("20bills:%d\n10bills:%d\n5bills:%d\n1bills:%d ",_20,_10,_5,_1);

    return 0;
}