#include <stdio.h>

#define N 99
int main()
{

    printf("This program creates a magic square of a specified size.\n\
The size must be an odd number between 1 and 99.\n\
Enter size of magic square :");

    int n = 0;
    scanf("%d", &n);

    int a[N][N] = {0},
        srow = 0,
        scol = n / 2;

    a[srow][scol] = 1;

    int i = 1;
    while (i < n * n)
    {
        int r = srow;
        int c = scol;
        srow -= 1;
        scol += 1;

        // FIRST CASE FOR OVERLAPPING
            scol = scol % n;
            srow = (srow + n) % n;
        
        // SECOND CASE FOR TOP RIGHT CORNER and OCCUPIED CELL
        if ((a[srow][scol] != 0))
        {
            srow = r;
            scol = c;
            srow++;
        }

        a[srow][scol] = i + 1;

        i++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.2d  ", a[i][j]);
        }
        printf("\n");
    }
}
