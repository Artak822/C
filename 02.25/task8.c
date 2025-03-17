#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

typedef double (*Operation)(double, double);

int is_operation(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void calculate(const char *input) {
    double num1, num2;
    char operation;
    char buffer[100];

    // Парсинг строки
    if (sscanf(input, "%lf %c %lf", &num1, &operation, &num2) != 3) {
        printf("Ошибка: некорректный ввод.\n");
        return;
    }

    Operation op = NULL;
    switch (operation) {
        case '+': op = add; break;
        case '-': op = subtract; break;
        case '*': op = multiply; break;
        case '/': op = divide; break;
        default:
            printf("Ошибка: неизвестная операция.\n");
            return;
    }

    if (operation == '/' && num2 == 0) {
        printf("Ошибка: деление на ноль.\n");
        return;
    }

    double result = op(num1, num2);
    printf("Результат: %.2lf\n", result);
}

int main() {
    char input[100];

    while (1) {
        printf("Введите выражение или 'exit' для выхода: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            printf("Выход из программы.\n");
            break;
        }

        calculate(input);
    }

    return 0;
}