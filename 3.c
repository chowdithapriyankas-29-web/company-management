#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Staff {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

struct Staff staffList[MAX];
int count = 0;

void addStaff() {
    if (count >= MAX) {
        printf("Staff list full!\n");
        return;
    }
    struct Staff s;
    printf("\nEnter Staff ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Department: ");
    scanf(" %[^\n]", s.dept);
    printf("Enter Salary: ");
    scanf("%f", &s.salary);
    staffList[count++] = s;
    printf("Staff added successfully!\n");
}

void displayAll() {
    if (count == 0) {
        printf("\nNo staff records found.\n");
        return;
    }
    printf("\n---- Staff List ----\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nDept: %s\nSalary: %.2f\n",
               staffList[i].id, staffList[i].name,
               staffList[i].dept, staffList[i].salary);
    }
}

void searchStaff() {
    int id, found = 0;
    printf("\nEnter Staff ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (staffList[i].id == id) {
            printf("\n--- Staff Found ---\n");
            printf("ID: %d\nName: %s\nDept: %s\nSalary: %.2f\n",
                   staffList[i].id, staffList[i].name,
                   staffList[i].dept, staffList[i].salary);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No record found with ID %d\n", id);
}

void deleteStaff() {
    int id, found = 0;
    printf("\nEnter Staff ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (staffList[i].id == id) {
            for (int j = i; j < count - 1; j++)
                staffList[j] = staffList[j + 1];
            count--;
            found = 1;
            printf("Record deleted successfully!\n");
            break;
        }
    }
    if (!found)
        printf("No record found with ID %d\n", id);
}

void updateStaff() {
    int id, found = 0;
    printf("\nEnter Staff ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (staffList[i].id == id) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", staffList[i].name);
            printf("Enter new Department: ");
            scanf(" %[^\n]", staffList[i].dept);
            printf("Enter new Salary: ");
            scanf("%f", &staffList[i].salary);
            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No record found with ID %d\n", id);
}

void saveToFile() {
    FILE *fp = fopen("staff_data.txt", "w");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }
    for (int i = 0; i < count; i++)
        fprintf(fp, "%d,%s,%s,%.2f\n", staffList[i].id,
                staffList[i].name, staffList[i].dept, staffList[i].salary);
    fclose(fp);
    printf("Data saved to file successfully!\n");
}

void loadFromFile() {
    FILE *fp = fopen("staff_data.txt", "r");
    if (!fp)
        return;
    while (fscanf(fp, "%d,%49[^,],%29[^,],%f\n",
                  &staffList[count].id, staffList[count].name,
                  staffList[count].dept, &staffList[count].salary) == 4)
        count++;
    fclose(fp);
}

int main() {
    int choice;
    loadFromFile();
    do {
        printf("\n==== Company Staff Management ====\n");
        printf("1. Add Staff\n2. Display All\n3. Search Staff\n");
        printf("4. Update Staff\n5. Delete Staff\n6. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1: addStaff(); break;
        case 2: displayAll(); break;
        case 3: searchStaff(); break;
        case 4: updateStaff(); break;
        case 5: deleteStaff(); break;
        case 6: saveToFile(); printf("Exiting...\n"); break;
        default: printf("Invalid choice!\n");
        }
    } while (choice != 6);
    return 0;
}