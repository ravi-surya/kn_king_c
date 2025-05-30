#include <stdio.h>

#define N 99


void create_magic_square(int n, int magic_square[99][99]);
void print_magic_square(int n, int magic_square[99][99]);
int main()
{

    printf("This program creates a magic square of a specified size.\n\
The size must be an odd number between 1 and 99.\n\
Enter size of magic square :");

    int n = 0;
    scanf("%d", &n);

   int a[N][N] = {0};

    create_magic_square(n,a);
    print_magic_square(n,a);
        

}

void create_magic_square(int n, int magic_square[99][99])
{
    int srow = 0,
        scol = n / 2;

    magic_square[srow][scol] = 1;

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
        if ((magic_square[srow][scol] != 0))
        {
            srow = r;
            scol = c;
            srow++;
        }

        magic_square[srow][scol] = i + 1;

        i++;
    }
}
void print_magic_square(int n, int magic_square[99][99])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.2d  ", magic_square[i][j]);
        }
        printf("\n");
    }

}