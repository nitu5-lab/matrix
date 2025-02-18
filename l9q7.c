#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    char address[100];
    int age;
    float avg_marks;
};

void displayStudents(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nRoll Number: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avg_marks);
    }
}

int main() {
    struct Student students[12];
    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf(" %[^]s", students[i].name);
        printf("Address: ");
        scanf(" %[^]s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average Marks: ");
        scanf("%f", &students[i].avg_marks);
    }
    displayStudents(students, 12);
    return 0;
}
