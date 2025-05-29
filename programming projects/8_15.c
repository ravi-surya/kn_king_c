#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */

#define N 80
int main(void) {

	char a[N]= {0},c;
	int index=0;
	printf("enter the sentence : ");
	for(int i=0; (c=getchar())!='\n' && i<N;
	        i++)
	{
		a[i]=c;
		index++;
	}

	int n=0;
	printf("enter the shift amount 1 to 25 : ");
	scanf("%d",&n);


	for(int i=0; i<index+1; i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			putchar((((a[i]-'A')+n)%26)+'A');
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			putchar((((a[i]-'a')+n)%26)+'a');
		}
		else
		{
		    putchar(a[i]);
		}
	}



	return 0;
}