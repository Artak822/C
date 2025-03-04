#include <stdio.h>
#include <string.h> 

int main() {
    char correct_code[] = "LAUNCH-2025"; 
    char input_code[100]; 

    printf("Введите код запуска: ");
    scanf("%s", input_code);

    if (strcasecmp(input_code, correct_code) == 0) {
        printf("Код принят\n");
    } else {
        printf("Ошибка: неверный код!\n");
    }

    return 0;
}