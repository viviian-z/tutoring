// part1_while_loops.c
//
// Written by Vivian, 
// on friday 14 june
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    printf("Start\n");

    int counter = 0;
    while (counter < 10) {
        printf("%d\n", counter);
        counter++;
    }

    printf("End\n");

    return 0;
}
