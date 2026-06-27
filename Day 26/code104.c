#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Question 1: Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai 4.Kolkata\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Question 2: 5 + 7 = ?\n");
    printf("1.10 2.12 3.14 4.15\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Question 3: C language developed by?\n");
    printf("1.Bjarne Stroustrup 2.Dennis Ritchie 3.James Gosling 4.Guido van Rossum\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Your Score = %d/3\n", score);

    return 0;
}