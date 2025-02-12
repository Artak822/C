#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char positions[20];
    float salary;
} Employee;

int main(){
    int n;
    scanf("%d", &n);

    Employee* employees = malloc(sizeof(Employee) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %s %f", employees[i].name, employees[i].positions, &employees[i].salary);
    }

    for (int i = 0; i < n; i++){
        printf("\nName: %s\nPosition: %s\nSalary: %.2f\n", employees[i].name, employees[i].positions, employees[i].salary);
    }
}