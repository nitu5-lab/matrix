#include <stdio.h>

struct Company {
    char name[50];
    char address[100];
    char phone[15];
    int noofemployee;
};

void displayCompany(struct Company *c) {
    printf("\nCompany Details:\n");
    printf("Name: %s\n", c->name);
    printf("Address: %s\n", c->address);
    printf("Phone: %s\n", c->phone);
    printf("Number of Employees: %d\n", c->noofemployee);
}

int main() {
    struct Company company;
    printf("Enter company details:\n");
    printf("Name: ");
    scanf(" %[^]s", company.name);
    printf("Address: ");
    scanf(" %[^]s", company.address);
    printf("Phone: ");
    scanf(" %[^]s", company.phone);
    printf("Number of Employees: ");
    scanf("%d", &company.noofemployee);
    displayCompany(&company);
    return 0;
}