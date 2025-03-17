#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upper_case(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void lower_case(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void reverse_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

typedef struct {
    char name[10];
    void (*function)(char *);
} Command;

int main() {
    Command commands[] = {
        {"upper", upper_case},
        {"lower", lower_case},
        {"reverse", reverse_string},
        {"exit", NULL}
    };

    char input[100];
    char command[10];

    while (1) {
        printf("Введите команду (upper, lower, reverse, exit): ");
        scanf("%s", command);

        int found = 0;
        for (int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++) {
            if (strcmp(command, commands[i].name) == 0) {
                if (commands[i].function == NULL) {
                    printf("Выход из программы.\n");
                    return 0;
                }

                printf("Введите строку: ");
                scanf("%s", input);

                commands[i].function(input);
                printf("Результат: %s\n", input);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Неизвестная команда. Попробуйте снова.\n");
        }
    }

    return 0;
}