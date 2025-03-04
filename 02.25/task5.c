#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const char *original[101];
    scanf("%s", original);
    char *copy = strdup(original);
    
    printf("Оригинал: %s\n", original);
    printf("Копия: %s\n", copy);

    free(copy);

    return 0;

}