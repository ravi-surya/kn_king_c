#include <stdio.h>

int main(void) {
    int num, n1, n2;

    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("Invalid input. Please enter a two-digit number.\n");
        return 1;
    }

    if (num >= 10 && num <= 19) {
        printf("You entered the number ");
        switch (num) {
            case 10: printf("TEN\n"); break;
            case 11: printf("ELEVEN\n"); break;
            case 12: printf("TWELVE\n"); break;
            case 13: printf("THIRTEEN\n"); break;
            case 14: printf("FOURTEEN\n"); break;
            case 15: printf("FIFTEEN\n"); break;
            case 16: printf("SIXTEEN\n"); break;
            case 17: printf("SEVENTEEN\n"); break;
            case 18: printf("EIGHTEEN\n"); break;
            case 19: printf("NINETEEN\n"); break;
        }
    } else {
        n1 = num % 10;
        n2 = num / 10;

        printf("You entered the number ");

        switch (n2) {
            case 2: printf("TWENTY"); break;
            case 3: printf("THIRTY"); break;
            case 4: printf("FORTY"); break;
            case 5: printf("FIFTY"); break;
            case 6: printf("SIXTY"); break;
            case 7: printf("SEVENTY"); break;
            case 8: printf("EIGHTY"); break;
            case 9: printf("NINETY"); break;
        }

        if (n1 != 0) {
            printf("-");
            switch (n1) {
                case 1: printf("ONE"); break;
                case 2: printf("TWO"); break;
                case 3: printf("THREE"); break;
                case 4: printf("FOUR"); break;
                case 5: printf("FIVE"); break;
                case 6: printf("SIX"); break;
                case 7: printf("SEVEN"); break;
                case 8: printf("EIGHT"); break;
                case 9: printf("NINE"); break;
            }
        }

        printf("\n");
    }

    return 0;
}
