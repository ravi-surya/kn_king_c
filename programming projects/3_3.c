#include<stdio.h>

int main(void)
{
    int GSI,IDENTIFIER,CODE,NUMBER,CHECK;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&GSI,&IDENTIFIER,&CODE,&NUMBER,&CHECK);
    printf("GS1 prefix:%d\nGroup identifier:%d\nPublisher code:%d\nItem number:%d\nCheck digit: %d",GSI,IDENTIFIER,CODE,NUMBER,CHECK);

    return 0;

}