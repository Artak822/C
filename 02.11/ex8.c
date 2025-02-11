#include <stdio.h>

int main(){
    int weight;
    printf("Введите вес груза: ");
    scanf("%d", &weight);

    if (weight % 4 == 0){
        int f = weight / 4;
        printf("Да, в каждом отсеке по %d %s\n", f, "кг");
    }
    else printf("Нет, невозможно\n");
}