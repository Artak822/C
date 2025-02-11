#include <stdio.h>

int main(){
    int simb;

    printf("Введите символ: ");
    simb = getchar();
    if (simb < 65 || simb > 90) printf("Не подходит\n");
    else printf("Подходит\n");
}