#include<stdio.h>

int main() {
    char books[3][30]={"C","Java","Python"};

    printf("Library Books:\n");

    for(int i=0;i<3;i++)
        printf("%s\n",books[i]);

    return 0;
}