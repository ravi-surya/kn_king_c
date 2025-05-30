#include <stdio.h>

#define MAX_LEN 100

void selection_sort(int a[],int n);

int main()
{

    int i, c, n, a[MAX_LEN];
    printf("Enter list of integers to be sorted: ");
    for (i = 0, n = 0; i < MAX_LEN; i++) {
        scanf(" %d", &a[i]);
        n++;
        if ((c = getchar()) == '\n') 
        //got this part from the internet github source the unget function badly framed question;
            break;                   
        ungetc(c, stdin);           
    }
    
    selection_sort(a,n);

    for(int i =0; i<n;i++)
    {
        printf("%d ",a[i]);
    }



}

void selection_sort(int a[],int n)
{
    if(n<=0)
    {
        return;
    }
    int index=0;
    int max=a[0];


    for(int i=1;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    if(index!=(n-1))
    {
    int temp= a[n-1];
    a[n-1]= max;
    a[index]= temp;
    }
    selection_sort(a,n-1);

}
