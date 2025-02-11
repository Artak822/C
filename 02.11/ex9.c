#include <stdio.h>

int main(){
    double time;
    printf("Введите время в секундах: ");
    scanf("%lf", &time);

    int k = time / 60;
    if (k == 0) printf("%lf секунд\n", time);
    else {
        time = time - k * 60;
        printf("%d минута %.1lf секунд\n", k, time);
    }
}