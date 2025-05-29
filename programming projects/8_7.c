#include <stdio.h>
#include <ctype.h>


#define N 5

int main(void) {

int a[N][N]={0};





for(int i=0;i<N;i++)
{
    printf("enter row %d : \n",i);

    for(int j=0;j<N;j++)
    {
        scanf("%d",&a[i][j]);
    }

}
printf("Row totals: ");
for(int i=0;i<N;i++)
{
    int sum=0;
    for(int j=0;j<N;j++)
    {
       sum+= a[i][j];
    }
    printf("%d ",sum );
    
}


printf("\nColumn totals: ");
for(int i=0;i<N;i++)
{
    int sum=0;
    for(int j=0;j<N;j++)
    {
       sum+= a[j][i];
    }
    printf("%d ",sum );
    
}



}
