#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    char item[20];
    int quan;
    float price;
} Item;

int main(){
    int n;
    scanf("%d", &n);

    Item* items = malloc(sizeof(Item) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %d %f", items[i].item, &items[i].quan, &items[i].price);
    }

    for (int i = 0; i < n; i++){
        printf("\nItem: %s\nQuantity: %d\nPrice: %.2f\n\n", items[i].item, items[i].quan, items[i].price);
    }

}