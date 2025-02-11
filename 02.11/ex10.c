#include <stdio.h>

int main(){
    int temp;
    printf("Введите температуру: \n");
    scanf("%d", &temp);

    if (temp >= -150 && temp <= 120) printf("Температура в допустимых значениях\n");
    else printf("Температура в не допустимых значениях\n");
}