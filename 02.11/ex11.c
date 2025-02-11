#include <stdio.h>

int main(){
    float oxygen;
    printf("Введите кол-во кислорода: ");
    scanf("%f", &oxygen);

    if (oxygen < 0.15) printf("Экипаж должен включить аварийную систему\n");
    else printf("Все в норме\n");
}