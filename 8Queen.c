#include <stdio.h>

#define N 8

int board[N][N];

int is_attacked(int row, int col) {
    int i, j;
    
    // Check row and column
    for (i = 0; i < N; i++) {
        if (board[row][i] || board[i][col]) {
            return 1;
        }
    }
    
    // Check diagonals
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if ((i + j == row + col || i - j == row - col) && board[i][j]) {
                return 1;
            }
        }
    }
    
    return 0;
}

int solve(int col) {
    int i;
    
    if (col == N) {
        // Solution found
        return 1;
    }
    
    for (i = 0; i < N; i++) {
        if (!is_attacked(i, col)) {
            board[i][col] = 1;
            
            if (solve(col + 1)) {
                return 1;
            }
            
            board[i][col] = 0;
        }
    }
    
    return 0;
}

int main() {
    int i, j;
    
    // Initialize board to 0
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    
    if (solve(0)) {
        // Print solution
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}
