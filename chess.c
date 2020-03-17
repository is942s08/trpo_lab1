#include <stdio.h>

void print_board(char* board[]);

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("Usage: ./chess [file]\n");
        return 0;
    }

    char* filename = argv[1];

    char* board[] = {"rnbqkbnr",
                     "pppppppp",
                     "        ",
                     "        ",
                     "        ",
                     "        ",
                     "PPPPPPPP",
                     "RNBQKBNR"};

    print_board(board);

    return 0;
}

void print_board(char* board[])
{
    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}
