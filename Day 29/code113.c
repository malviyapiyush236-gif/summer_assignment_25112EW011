#include<stdio.h>

int main() {
    int ch;
    float a,b;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d",&ch);

    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    switch(ch) {
        case 1: printf("%.2f",a+b); break;
        case 2: printf("%.2f",a-b); break;
        case 3: printf("%.2f",a*b); break;
        case 4:
            if(b!=0)
                printf("%.2f",a/b);
            else
                printf("Division by zero");
    }

    return 0;
}