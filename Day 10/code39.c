#include<stdio.h>

int main() {
    int i, j, k, rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}