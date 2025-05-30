#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "admissions.dat"

typedef struct {
    int id;
    char name[50];
    int age;
    char course[30];
} Student;

void addStudent() {
    FILE *fp = fopen(FILENAME, "ab");
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }
    Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Course: ");
    scanf(" %[^\n]", s.course);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Student added successfully.\n");
}

void displayStudents() {
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }
    Student s;
    printf("\n%-5s %-20s %-5s %-20s\n", "ID", "Name", "Age", "Course");
    printf("------------------------------------------------------\n");
    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("%-5d %-20s %-5d %-20s\n", s.id, s.name, s.age, s.course);
    }
    fclose(fp);
}

void searchStudent() {
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }
    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == id) {
            printf("Record found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\n", s.id, s.name, s.age, s.course);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found.\n");
    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\nAdmission Management System\n");
        printf("1. Add Student\n2. Display All Students\n3. Search Student by ID\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}