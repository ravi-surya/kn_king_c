#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
    char grid[N][N];
    int row = 0, col = 0;
    char letter = 'A';

    srand((unsigned)time(NULL));

    // Fill grid with dots
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            grid[i][j] = '.';

    grid[row][col] = letter;

    while (letter < 'Z')
    {
        int directions[4][2] = {
            {-1, 0}, // up
            {1, 0},  // down
            {0, -1}, // left
            {0, 1}   // right
        };

        int valid_moves[4];
        int move_count = 0;

        // Check valid directions
        for (int i = 0; i < 4; i++)
        {
            int new_row = row + directions[i][0];
            int new_col = col + directions[i][1];

            if (new_row >= 0 && new_row < N && new_col >= 0 && new_col < N && grid[new_row][new_col] == '.')
            {
                valid_moves[move_count++] = i;
            }
        }

        if (move_count == 0)
            break; // No moves left

        int move = valid_moves[rand() % move_count];
        row += directions[move][0];
        col += directions[move][1];
        grid[row][col] = ++letter;
    }

    // Print the final grid
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%c ", grid[i][j]);
        printf("\n");
    }

    return 0;
}
