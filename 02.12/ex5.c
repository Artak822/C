#include <stdio.h>
#include <stdlib.h>

typedef union {
    int i;
    char str[30];
    float f;
} Data;

int main(){
    int n;
    scanf("%d", &n);

    Data data;

    if (n == 1) {
        scanf("%d", &data.i);
        printf("Integer: %d\n", data.i);
    }
    else if (n == 2){
        scanf("%f", &data.f);
        printf("Float: %.2f\n", data.f);
    }

    else if (n == 3){
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }

    else printf("Incorrect\n");
}