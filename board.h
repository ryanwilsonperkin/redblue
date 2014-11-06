#ifndef RED_BLUE_BOARD_H
#define RED_BLUE_BOARD_H

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define WHITE_CHAR ' '
#define RED_CHAR '>'
#define BLUE_CHAR 'V'

typedef struct board_
{
    int **points;
    int width;
    char complete;
    int max_density;
} board;

typedef struct tile_result_
{
    int white;
    int red;
    int blue;
} tile_result;

tile_result check_tile(board b, int x_start, int y_start, int x_end, int y_end);
void check_board(board *b, int max_density, int tile_width);
void free_board(board *b);
void init_board(board *b, int board_width, int random_seed);
void print_board(board b, FILE *results_file, char colour_mode);
void shift_board(board *b);
void shift_red(board *b);
void shift_blue(board *b);
void shift_row(board *b, int index);
void shift_column(board *b, int index);

#endif  // RED_BLUE_BOARD_H
