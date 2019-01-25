#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>


int draw_board(void);

int print_chars(void);

int main(void)
{
    int board = draw_board();
    printf("%c", board);
}

int print_chars(void)
{
    char empty_cells[9];
    char chars["X", "O"];
    //char move;
    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_cols; col++)
        {
            if (empty_cells[row][col] == ' ')
            {
                printf("X");
            }
        }
    }

    // do
    // {
    //     printf("Your move: Enter O or X", move);
    //     empty_spaces--;
    // }
    // while (move != "X" && move != "O" || empty_cells < 1);




    // Check for empty spaces
    // Char array for empty spaces

    // while(empty_spaces )

}

int draw_board(void)
{
    int num_rows = 4;
    int num_cols = 4;

    for (int row = 0; row <= num_rows; row++)
    {
        for (int col = 0; col <= num_cols; col++)
        {

            if (col % 2 == 0 && row % 2 == 0)
            {
                printf(" ");
            }

            if (col % 2 != 0 && row % 2 == 0)
            {
                printf("|");
            }

            if (row % 2 != 0 && col % 2 != 0)
            {
                printf("+");
            }

            if (row % 2 != 0 && col % 2 == 0)
            {
                printf("-");
            }
        }
        printf("\n");
        //printf("\n");
    }
    return 0;
}

// Next Challenge: Implement this board using an array or multi-dimensional array.