#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int draw_board(void);

// int print_chars(void);

int import_board(char* board_data[]);

bool is_valid_move(char move);

//int import_board

int main(void)
{
    // int board = draw_board();
    // printf("%c", board);

    int board_state = import_board("XXOXOOXO");


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
    }
    return 0;
}

// Load game state from file

char* import_board(char* board_data[])
{
    char board[9]; // array board cells
    // char state[3] = {" ", "X", "O"}; // possible board cell states

    // Copy chars in board_data array to board array

    for (int cell = 0; cell < strlen(board_data); cell++)
    {
        board[cell] = board_data[cell];
        printf("%c", board[cell]);
    }

    return board;
}

bool is_valid_move(char move)
{
    // If valid move
    if (isupper(move) == 'x' || isupper(move) == 'o' && move != NULL)
    {
        return true;
    }
    else
    {
        // Invalid move
        return false;
    }
}

// is_valid_move with a string return value

// char* is_valid_move(char move)
// {
//     char* message= "";
//     if (isupper(move) == 'x' || isupper(move) == 'o' && move != NULL)
//     {
//         message = "Valid move.";
//     }
//     else
//     {
//         // Invalid move
//         message = "Invalid move.";
//     }
//     return message;
// }
