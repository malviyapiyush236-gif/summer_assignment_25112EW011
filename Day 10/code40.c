#include<stdio.h>

int main() {
    int i, j, k, rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(k = i - 2; k >= 0; k--) {
            printf("%c", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}