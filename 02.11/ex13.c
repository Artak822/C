#include <stdio.h>

int main(){
    int astro;
    printf("Введите кол-во космонавтов: ");
    scanf("%d", &astro);

    if (astro % 2 == 0) printf("Можно доставить без остатка\n");
    else printf("Нельзя доставить без остатка\n");

}