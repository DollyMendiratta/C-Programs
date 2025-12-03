#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *s = (struct Student *) malloc(n * sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    // Input student details
    printf("\nEnter details of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print student details
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    // Free allocated memory
    free(s);

    return 0;
}