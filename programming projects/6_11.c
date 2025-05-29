#include <stdio.h>

int main(void) {

    printf("enter a number :");

    int n;

    float e=1.0f,factorial=1.0f;

    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
       
            factorial*=i;
            e+=1/factorial;
        
    }

    printf("%f",e);

}
//not completed