





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Employee Data
struct Employee {
    char SSN[20];
    char Name[50];
    char Dept[30];
    char Designation[30];
    float Salary;
    char Phone[15];
    struct Employee *next;
} *Head = NULL;

// Function to create the SCLL using end insertion
void create() {
    int n, i;
    struct Employee *newNode, *last;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        newNode = (struct Employee *)malloc(sizeof(struct Employee));
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("SSN: "); scanf("%s", newNode->SSN);
        printf("Name: "); scanf("%s", newNode->Name);
        printf("Department: "); scanf("%s", newNode->Dept);
        printf("Designation: "); scanf("%s", newNode->Designation);
        printf("Salary: "); scanf("%f", &newNode->Salary);
        printf("Phone: "); scanf("%s", newNode->Phone);

        newNode->next = newNode; // Point to itself initially

        if (Head == NULL) {
            Head = newNode;
        } else {
            last = Head;
            while (last->next != Head) {
                last = last->next;
            }
            last->next = newNode;
            newNode->next = Head;
        }
    }
}

// Function to display the SCLL and count the nodes
void display() {
    struct Employee *temp = Head;
    int count = 0;
    
    if (Head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("\nEmployee Data:\n");
    do {
        printf("SSN: %s, Name: %s, Dept: %s, Designation: %s, Salary: %.2f, Phone: %s\n",
               temp->SSN, temp->Name, temp->Dept, temp->Designation, temp->Salary, temp->Phone);
        temp = temp->next;
        count++;
    } while (temp != Head);
    
    printf("\nTotal number of nodes: %d\n", count);
}

// Function to insert a node at the end of the list
void insertEnd() {
    struct Employee *newNode, *last;
    newNode = (struct Employee *)malloc(sizeof(struct Employee));
    
    printf("\nEnter details of the employee to insert at end:\n");
    printf("SSN: "); scanf("%s", newNode->SSN);
    printf("Name: "); scanf("%s", newNode->Name);
    printf("Department: "); scanf("%s", newNode->Dept);
    printf("Designation: "); scanf("%s", newNode->Designation);
    printf("Salary: "); scanf("%f", &newNode->Salary);
    printf("Phone: "); scanf("%s", newNode->Phone);

    newNode->next = newNode;

    if (Head == NULL) {
        Head = newNode;
    } else {
        last = Head;
        while (last->next != Head) {
            last = last->next;
        }
        last->next = newNode;
        newNode->next = Head;
    }
}

// Function to delete a node from the end of the list
void deleteEnd() {
    struct Employee *temp = Head, *prev;

    if (Head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    if (Head->next == Head) { // Only one node
        printf("Deleted employee: %s\n", Head->Name);
        free(Head);
        Head = NULL;
    } else {
        while (temp->next != Head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = Head;
        printf("Deleted employee: %s\n", temp->Name);
        free(temp);
    }
}

// Function to insert a node at the front of the list
void insertFront() {
    struct Employee *newNode, *last;
    newNode = (struct Employee *)malloc(sizeof(struct Employee));

    printf("\nEnter details of the employee to insert at front:\n");
    printf("SSN: "); scanf("%s", newNode->SSN);
    printf("Name: "); scanf("%s", newNode->Name);
    printf("Department: "); scanf("%s", newNode->Dept);
    printf("Designation: "); scanf("%s", newNode->Designation);
    printf("Salary: "); scanf("%f", &newNode->Salary);
    printf("Phone: "); scanf("%s", newNode->Phone);

    if (Head == NULL) {
        Head = newNode;
        newNode->next = Head;
    } else {
        last = Head;
        while (last->next != Head) {
            last = last->next;
        }
        newNode->next = Head;
        last->next = newNode;
        Head = newNode;
    }
}

// Function to delete a node from the front of the list
void deleteFront() {
    struct Employee *temp = Head, *last;

    if (Head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    if (Head->next == Head) { // Only one node
        printf("Deleted employee: %s\n", Head->Name);
        free(Head);
        Head = NULL;
    } else {
        last = Head;
        while (last->next != Head) {
            last = last->next;
        }
        temp = Head;
        Head = Head->next;
        last->next = Head;
        printf("Deleted employee: %s\n", temp->Name);
        free(temp);
    }
}

// Main function with menu-driven interface
int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create SCLL\n");
        printf("2. Display SCLL and Count Nodes\n");
        printf("3. Insert at End\n");
        printf("4. Delete from End\n");
        printf("5. Insert at Front\n");
        printf("6. Delete from Front\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertEnd(); break;
            case 4: deleteEnd(); break;
            case 5: insertFront(); break;
            case 6: deleteFront(); break;
            case 7: exit(0);
            default: printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
