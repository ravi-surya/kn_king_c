#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */
#include <ctype.h>
int main(void) {
	int a[26]= {0};
	int index=0;
	
	char c;
	printf("enter the first word: ");
	
	while((c=toupper(getchar()))!='\n')
	{
	    a[c-'A']++;
	}
	
	
	printf("enter the second word: ");
	
	while((c=toupper(getchar()))!='\n')
	{
	    a[c-'A']--;
	}
    
    int i=0;
    while(i<26)
    {
        if(a[i]!=0)
        {
            printf("not a anagram");
            break;
        }
        i++;
    }
    if(i==26)
    {
        printf("these words are anagram");
    }
	



	return 0;
}