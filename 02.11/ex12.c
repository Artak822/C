#include <stdio.h>

int main(){
    int degree;
    printf("Введите градус: ");
    scanf("%d", &degree);

    if (degree >= -180 && degree <= 180) printf("Входит в допустимый диапазон\n");
    else printf("Выходит за допустимый диапазон\n");
}