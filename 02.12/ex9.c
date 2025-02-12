#include <stdio.h>

typedef enum {
    Sunny, Cloudy, Rainy
} Condition;

typedef struct {
    float temp;
    float hum;
    Condition condition;
} Weather;

int main(){
    Weather weather;
    scanf("%f %f %d", &weather.temp, &weather.hum, &weather.condition);

    printf("\nTemperature: %.1f°C\nHumidity: %.1f°C\nCondtition: ", weather.temp, weather.hum);

    switch(weather.condition) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }
}