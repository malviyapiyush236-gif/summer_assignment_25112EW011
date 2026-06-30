#include<stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;

    scanf("%d%s%f",&e.id,e.name,&e.salary);

    printf("\nEmployee Details\n");
    printf("ID=%d\nName=%s\nSalary=%.2f",e.id,e.name,e.salary);

    return 0;
}