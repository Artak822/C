#include <stdio.h>
#include "ship.h"

void check_fuel(int fuel_level) {
    if (fuel_level < 10) printf("Внимание: уровень топлива менее 10%%!\n");
    else printf("Уровень топлива в норме.\n");
}