#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */
#include <ctype.h>
#include <stdbool.h>


void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
	int a[26]= {0},a1[26]={0};
	int index=0;
	
	read_word(a);
	read_word(a1);
    
    if(equal_array(a,a1))
    {
        printf("these words are anagram");
    }
    else
    {
        printf("these words are not anagram");
    }

	return 0;
}

void read_word(int counts[26])
{   
    printf("enter the  word: ");
    char c;
    while((c=toupper(getchar()))!='\n')
	{
	    counts[c-'A']++;
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i=0;i<26;i++)
    {
        if(counts1[i]!=counts2[i])
        {
            return false;
        }
    }

    return true;

}