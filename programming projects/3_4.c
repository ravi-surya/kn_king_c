#include<stdio.h>

int main(void)
{
    int big,mid,end;
    printf("enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&big,&mid,&end);
    printf("%d.%d.%d",big,mid,end);


    return 0;


}
