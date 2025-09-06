#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the two numbers a and b to swap : ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The numbers a and b are now %d and %d", a, b);
    return 0;
}