// part2_2d_while_loops.c
//
// This program was writtn by Vivian
// on June 2024
//
// This program is a simple demonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    printf("Start outer loop\n");
    int row = 0;
    int col = 0;

    while (row < MAX_ROW) {
        printf("Row %d\n", row);
        printf("Start inner loop\n");
        col = 0;
        while (col < MAX_COL) {
            printf("Column %d\n", col);
            col++;
        }
        printf("End inner loop\n");
        row++;
    }

    printf("End outer loop\n");
    

    return 0;
}
