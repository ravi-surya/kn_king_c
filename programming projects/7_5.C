#include<stdio.h>
#include<ctype.h>

int main(void)
{
     char c;
     int sum=0;
     int a[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                 1, 4, 4, 8, 4, 10};
    printf("Enter a word: ");
    while ((c = toupper(getchar())) != '\n') {
        switch (toupper(c)) {
            case 'A': case 'E': case 'I': case 'L':case 'N': case 'O':case 'R': case 'T': case 'U':case 'S':
                sum+=1;
                break;
            case 'D':case 'G': 
                sum+=2;
                break;
             case 'C': case 'B': case 'M': case 'P':
                sum+=3;
                break;
            case 'F': case 'H': case 'V': case 'W':  case 'Y':
                sum+=4;
                break;
            case 'K':
                sum+=5;
                break;
            case 'J': case 'X': 
                sum+=8;
                break;
           case 'Q':case 'Z':
                sum+=10;
                break;
            default:              
                 break;
        }
    }

    printf("scarabble value : %d",sum);

    return 0;
}