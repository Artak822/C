#include <stdio.h>
#include <stdlib.h>

typedef union {
    int num;
    char let[10];
} Grade;

int main(){
    int n;
    scanf("%d", &n);
    Grade* grades = malloc(sizeof(Grade) * n);

    for (int i = 0; i < n; i++){
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].num);
            printf("Grade: %d\n", grades[i].num);
        } else if (type == 2) {
            scanf(" %s", grades[i].let);
            printf("Grade: %s\n", grades[i].let);
        }
    }
}
