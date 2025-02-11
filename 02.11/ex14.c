#include <stdio.h>

int main() {
    int earth_weight;

    printf("Введиите массу объекта: ");
    scanf("%d", &earth_weight);
    float moone_weight = earth_weight * (1.0 / 6);

    printf("Масса объекта на Луне сосотавляет %.1f\n", moone_weight);
}