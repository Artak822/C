#include <stdio.h>
#include <stdlib.h>

typedef struct {int day; int month; int year;} Date;

typedef struct {
    char event_name[20];
    Date date;
    char descriptions[40];
} Event;

int main(){
    int n;
    scanf("%d", &n);

    Event* events = malloc(sizeof(Event) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %d %d %d %s", events[i].event_name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].descriptions);
    }

    for (int i = 0; i < n; i++){
        printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n", events[i].event_name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].descriptions);
    }
}