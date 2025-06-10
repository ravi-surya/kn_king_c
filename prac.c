#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> // For isdigit()

#define MAX_DIGITS 10
#define ROWS 4
#define COLS_PER_DIGIT 4 // 3 chars for digit + 1 space

// External array to store the final display characters
char digits[ROWS][MAX_DIGITS * COLS_PER_DIGIT];

// External array storing the segment patterns for each digit (0-9)
// Each row represents a digit (0-9)
// Each column represents one of the 7 segments (A-G)
// true = segment is ON, false = segment is OFF
// Segment mapping:
//    A
//  F   B
//    G
//  E   C
//    D
bool digit_segments[10][7] = {
    // A  B  C  D  E  F  G
    {true,true,true,true,true,true,false}, // 0
    {false,true,true,false,false,false,false}, // 1
    {true,true,false,true,true,false,true}, // 2
    {true,true,true,true,false,false,true}, // 3
    {false,true,true,false,false,true,true}, // 4
    {true,false,true,true,false,true,true}, // 5
    {true,false,true,true,true,true,true}, // 6
    {true,true,true,false,false,false,false}, // 7
    {true,true,true,true,true,true,true}, // 8
    {true,true,true,true,false,true,true}  // 9
};

// Function prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main() {
    char ch;
    int digit_count = 0;

    // Initialize the display array with blanks
    clear_digits_array();

    printf("Enter a number: ");

    // Read characters until newline or end of file
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isdigit(ch)) { // Check if the character is a digit
            if (digit_count < MAX_DIGITS) { // Check if we haven't exceeded MAX_DIGITS
                // Convert char digit to int and process it
                process_digit(ch - '0', digit_count);
                digit_count++;
            }
        }
        // Non-digit characters (other than newline) are ignored
    }

    // Display the final segmented number
    print_digits_array();

    return 0;
}

// Stores blank characters into all elements of the digits array
void clear_digits_array(void) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < MAX_DIGITS * COLS_PER_DIGIT; j++) {
            digits[i][j] = ' ';
        }
    }
}

// Stores the seven-segment representation of 'digit' into a specified position
// 'position' ranges from 0 to MAX_DIGITS - 1
void process_digit(int digit, int position) {
    // Calculate the starting column for this digit in the 'digits' array
    int start_col = position * COLS_PER_DIGIT;

    // Get the segment pattern for the given digit
    bool *segments_on = digit_segments[digit];

    // Place characters for each segment based on the 4-row layout:
    // Row 0: Top segment (A)
    // Row 1: Top-left (F), Middle (G), Top-right (B)
    // Row 2: Bottom-left (E), Bottom-right (C)
    // Row 3: Bottom segment (D)

    // Segment A (Top horizontal)
    if (segments_on[0]) {
        digits[0][start_col + 1] = '_';
    }
    // Segment B (Top-right vertical)
    if (segments_on[1]) {
        digits[1][start_col + 2] = '|';
    }
    // Segment C (Bottom-right vertical)
    if (segments_on[2]) {
        digits[2][start_col + 2] = '|';
    }
    // Segment D (Bottom horizontal)
    if (segments_on[3]) {
        digits[3][start_col + 1] = '_';
    }
    // Segment E (Bottom-left vertical)
    if (segments_on[4]) {
        digits[2][start_col] = '|';
    }
    // Segment F (Top-left vertical)
    if (segments_on[5]) {
        digits[1][start_col] = '|';
    }
    // Segment G (Middle horizontal)
    if (segments_on[6]) {
        digits[1][start_col + 1] = '_'; // Place G on the same line as F and B
    }
}

// Displays the rows of the digits array, each on a single line
void print_digits_array(void) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < MAX_DIGITS * COLS_PER_DIGIT; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n"); // Newline after each row
    }
}