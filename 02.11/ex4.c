#include <stdio.h>

int main(){
    int date_today = 20250211;
    int date_start;

    printf("Введите дату старта\n");
    scanf("%d", &date_start);

    if (date_start > date_today) printf("Дата корректна\n");
    else printf("Дата некореткна\n");
}