#include <stdio.h>

int main(void) {
    double avg = 0.0;
    int length = 0, spaces = 0;
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            spaces++;
        } else {
            length++;
        }
    }

    int words = spaces + 1;

    if (words > 0)
        avg = (double) length / words;
    else
        avg = 0.0;

    printf("Average word length: %.1f\n", avg);

    return 0;
}
