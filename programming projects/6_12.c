#include <stdio.h>

int main(void) {

    

    

    float e=1.0f,factorial=1.0f,epsilon;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);


    for(int i=1;i<=epsilon;i++)
    {
       
            factorial*=i;
            e+=1/factorial;
        
    }

    printf("%f",e);

}
