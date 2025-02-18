#include <stdio.h>

struct Company {
    char name[50];
    char address[100];
    char phone[15];
    int noofemployee;
};

int main() {
    struct Company company;
    printf("Enter company details:\n");
    printf("Name: ");
    scanf(" %[^"]s", company.name);
    printf("Address: ");
    scanf(" %[^"]s", company.address);
    printf("Phone: ");
    scanf(" %[^"]s", company.phone);
    printf("Number of Employees: ");
    scanf("%d", &company.noofemployee);
    
    printf("\nCompany Details:\n");
    printf("Name: %s\n", company.name);
    printf("Address: %s\n", company.address);
    printf("Phone: %s\n", company.phone);
    printf("Number of Employees: %d\n", company.noofemployee);
    
    return 0;
}
