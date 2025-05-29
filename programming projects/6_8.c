#include <stdio.h>

int main(void) 
{
    
    int n,k;

    printf("enter number of days in month: ");
    scanf("%d",&n);

    printf("enter starting day of the week (1 = Sun, 7= Sat) : ");
    scanf("%d",&k);

    for (int i = 1; i <k; i++)
    printf("      ");

    for(int i=1; i<=n;k++, i++)
    {
        
        printf("%5d ",i);
        if(k%7==0)
        {
            printf("\n");
        }

    }

}