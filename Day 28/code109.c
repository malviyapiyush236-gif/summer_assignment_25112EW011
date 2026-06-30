#include<stdio.h>

struct Book {
    int id;
    char name[50];
    int issued;
};

int main() {
    struct Book b[3] = {
        {101,"C Programming",0},
        {102,"Java",0},
        {103,"Python",0}
    };
    int i, id;

    printf("Available Books:\n");
    for(i=0;i<3;i++)
        printf("%d %s\n",b[i].id,b[i].name);

    printf("Enter Book ID to issue: ");
    scanf("%d",&id);

    for(i=0;i<3;i++) {
        if(b[i].id==id) {
            b[i].issued=1;
            printf("Book Issued Successfully.\n");
        }
    }

    return 0;
}