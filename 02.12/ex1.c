#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[10];
    int age;
    float gpa;
} Student;

int main(){
    int n;
    scanf("%d", &n);
    Student* students = malloc(sizeof(Student) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++){
        printf("\nName: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }
}