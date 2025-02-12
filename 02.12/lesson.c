#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

union Data {
    int i;
    float f;
    char str[20];
};

enum Days {
    Sunday, Monday, Thuesday, Friday
};

int main() {
    struct Person l = {"Sasha", 18, 1.67};
    printf("Name %s, Age: %d, Height: %.2f\n", l.name, l.age, l.height);

    union Data data;
    data.f = 23.23;
    printf("Age: %f\n", data.f);

    enum Days day = Monday;
    printf("%d\n", day);
}