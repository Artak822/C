#include <stdio.h>

int main(){
    int dist;
    printf("Введите расстояние: ");
    scanf("%d", &dist);

    if (dist > 500) printf("Не доедет\n");
    else printf("Доедет\n");
}