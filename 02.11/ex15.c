#include <stdio.h>

int main() {
    double speed_kbps; 
    double data_mb;

    printf("Введите скорость передачи данных (Кбит/с): ");
    scanf("%lf", &speed_kbps);

    printf("Введите объем данных (МБ): ");
    scanf("%lf", &data_mb);

    double data_kbit = data_mb * 8192;
    double time_seconds = data_kbit / speed_kbps;
    double time_minutes = time_seconds / 60;

    printf("Время передачи: %.0f минут %.1f секунд\n", time_minutes, time_seconds);
}