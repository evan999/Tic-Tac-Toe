#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>


int draw_board(void);

// int print_chars(void);

int import_board(char* string[]);

bool is_valid_move(char move);

//int import_board

int main(void)
{
    int board = draw_board();
    printf("%c", board);

    return 0;
    //printf("%c", print_chars);
}

int draw_board(void)
{
    int num_rows = 4;
    int num_cols = 4;

    //char state[3] = {" ", "X", "O"};

    for (int row = 0; row <= num_rows; row++)
    {
        for (int col = 0; col <= num_cols; col++)
        {

            if (col % 2 == 0 && row % 2 == 0)
            {
                printf("X");
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

int import_board(char* string[])
{
    char board[9]; // array board cells
    char state[3] = {" ", "X", "O"}; // possible board cell states

    // Need a way to store the game data and board state

    for (int cell = 0; cell < sizeof board; cell++)
    {
        if (board[cell] == " ")
        {
            board[cell] = "X";
        }
    }

    // for(int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {

    //     }
    // }

}

bool is_valid_move(char move)
{

}
