#include <stdio.h>

int main(){
    int weight;

    printf("Введите массу тела: ");
    scanf("%d", &weight);

    if (weight < 60 || weight > 90) printf("Вы не прошли отбор\n");
    else printf("Вы прошли отбор\n");

}