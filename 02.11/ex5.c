#include <stdio.h>
#include <math.h>

int main(){
    double calculated_speed, actual_speed;

    printf("Введите расчетную скорость: ");
    scanf("%lf", &calculated_speed);

    printf("Введите фактическую скорость: ");
    scanf("%lf", &actual_speed);

    double difference = fabs(actual_speed - calculated_speed);
    
    if (difference > 0.1) printf("Орбита нестабильна\n");
    else printf("Орбита стабильна\n");
}