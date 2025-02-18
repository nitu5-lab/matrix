#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char address[100];
    int age;
    float physics, c, math;
};

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^"]s", students[i].name);
        printf("Address: ");
        scanf(" %[^"]s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks in Physics: ");
        scanf("%f", &students[i].physics);
        printf("Marks in C: ");
        scanf("%f", &students[i].c);
        printf("Marks in Math: ");
        scanf("%f", &students[i].math);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        float avg = (students[i].physics + students[i].c + students[i].math) / 3.0;
        printf("\nRoll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Physics: %.2f, C: %.2f, Math: %.2f\n", students[i].physics, students[i].c, students[i].math);
        printf("Average Marks: %.2f\n", avg);
    }
    return 0;
}
