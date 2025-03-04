#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char signal[101];
    printf("Введите сигнал: ");
    scanf("%100s", signal);

    char chars[] = "#*";
    size_t start = strspn(signal, chars);
    size_t lenght = strcspn(signal + start, chars);

    char *messege = strndup(signal + start, lenght);
    printf("%s\n", messege);
    printf("%zu\n", lenght);
    free(messege);

    return 0;
}