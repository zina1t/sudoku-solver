#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
int input() {
    int diff;
    int cnt = 0;
    printf("Choose the difficulty:\n1 - Easy\n2 - Medium\n3 - Hard\n4 - Master\n");
    scanf("%d", &diff);
    switch (diff){
        case 1:
            cnt = 38;
            break;
        case 2:
            cnt = 30;
            break;
        case 3:
            cnt = 25;
            break;
        case 4:
            cnt = 18;
            break;
    }   
    return cnt;
}

void initial(int lvl, int matrix[ROW][COL]) { // починить функцию (ничего не выводится если есть while)
    srand(time(NULL));
    int nums = 0;
    while (lvl != nums) {
        nums = 0;
        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {
                matrix[i][j] = rand() % 10;
                if (matrix[i][j] != 0) {
                    nums++;
                }
            }
        }
    }
}



void output(int matrix[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[ROW][COL];
    int lvl = input();
    initial(lvl, matrix);
    output(matrix);
    return 0;
}