#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char input[] = "Гагарин;Титов;Армстронг;Коллинз;Олдрин";
    const char *del = ";"; 

    char *token = strtok(input, del);

    printf("Список космонавтов:\n");
    while (token) {
        printf("%s\n", token); 
        token = strtok(NULL, del); 
    }

    return 0;
}