#include <stdio.h>

int main() {
    char ch;
    int len=0;

    printf("enter a message:");

    ch =getchar();
    while (ch!='\n')
    {
        /* code */
        len++;
        ch=getchar();
    }

    printf("your message was %d character long ",len);
    
    

    return 0;
}

 