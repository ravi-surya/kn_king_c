#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void) {

    char message[N]={0};
    char c;
    int i=0;

    printf("Enter message: ");
    

    while((c=getchar())!='\n')
    {
        message[i++]=toupper(c);
    }

    printf("In B1FF-speak: ");

    for(int i =0; i<(int)sizeof(message)/sizeof(message[0]);i++)
    {
        switch(c=message[i])
        {
          case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(c);
                break;  
        }
    }
    printf("!!!!!!!!!!!!!\n");

    return 0;


}