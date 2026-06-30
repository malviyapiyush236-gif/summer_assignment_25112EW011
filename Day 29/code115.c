#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int ch;

    printf("Enter String: ");
    scanf("%s",str);

    printf("1.Length\n2.Reverse\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            printf("Length=%lu",strlen(str));
            break;

        case 2:
            strrev(str);
            printf("%s",str);
    }

    return 0;
}