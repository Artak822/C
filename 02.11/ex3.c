#include <stdio.h>

int main(){
    int simb;

    printf("Введите символ\n");
    simb = getchar();
    if (simb < 65 || simb > 90) printf("Не подходит\n");
    else printf("Подходит\n");
}