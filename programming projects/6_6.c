#include <stdio.h>

int main(void) {

    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        if(i%2==0 && ((i*i)<=n))
        {

            printf("%d\n",i*i);
        }
    }



}
