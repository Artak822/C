#include <stdio.h>

int main(){
    float x;
    printf("Введите частоту передачи: ");
    scanf("%f", &x);

    if (x <= 3.5 && x >= 2.5) printf("Связь стабильна\n");
    else printf("Связь не стабильна\n");
}