#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int draw_board(void);

int main(void)
{
    int game_board = draw_board();
    printf("%c", game_board);
}

int draw_board(void)
{
    char board[4][4]; // 4 X 4 game board

    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_cols; col++)
        {

        }
    }


}