/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) {

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); /* ungets '\n' from buffer */

    for (i = 1; i <= n; i++) {

        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;
        }
    }    


    return 0;
}

/*
What’s the “input buffer”?
When you type something into your program (like using scanf()), your keyboard input is temporarily stored in a waiting area called the input buffer.

Example:

You type: 30 then press Enter

The buffer now contains: '3', '0', and '\n' (the newline from pressing Enter)

When scanf("%d", &n) runs, it:

Reads the 3 and the 0 to make the number 30

BUT it leaves the '\n' behind in the buffer!
*/