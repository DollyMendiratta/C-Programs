#include <stdio.h>
int main() {
    int percentage;
    char grade;
    printf("Enter percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';
    printf("Grade: %c\n", grade);
    return 0;
}