//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s;          // normal structure variable
    struct Student *ptr;       // pointer to structure

    ptr = &s;   // store address of structure variable in pointer

    // Modify structure members using -> operator
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Display structure data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
