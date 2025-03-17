#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void remove_spaces(char *str) {
    char *dst = str;
    while (*str) {
        if (*str != ' ') {
            *dst++ = *str;
        }
        str++;
    }
    *dst = '\0';
}

void replace_letters(char *str) {
    while (*str) {
        if (tolower(*str) == 'a' || tolower(*str) == 'e' ||
            tolower(*str) == 'i' || tolower(*str) == 'o' ||
            tolower(*str) == 'u') {
            *str = '*';
        }
        str++;
    }
}

void invert_case(char *str) {
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str);
        } else if (islower(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

typedef void (*StringProcessor)(char *);

int main() {
    char input[100];
    int choice;

    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    char *dynamic_string = (char *)malloc((strlen(input) + 1) * sizeof(char));
    
    strcpy(dynamic_string, input);

    printf("Выберите функцию обработки:\n");
    printf("1. Удаление пробелов\n");
    printf("2. Замена всех гласных на *\n");
    printf("3. Инвертирование регистра символов\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    StringProcessor processor = NULL;

    switch (choice) {
        case 1:
            processor = remove_spaces;
            break;
        case 2:
            processor = replace_letters;
            break;
        case 3:
            processor = invert_case;
            break;
        default:
            printf("Неверный выбор!\n");
            free(dynamic_string);
            return 1;
    }

    processor(dynamic_string);

    printf("Результат: %s\n", dynamic_string);

    free(dynamic_string);

    return 0;
}