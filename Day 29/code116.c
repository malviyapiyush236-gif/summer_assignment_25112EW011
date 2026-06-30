#include<stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
};

int main() {
    struct Item item;

    printf("Enter ID Name Quantity: ");
    scanf("%d%s%d",&item.id,item.name,&item.qty);

    printf("\nInventory Details\n");
    printf("%d %s %d",item.id,item.name,item.qty);

    return 0;
}