#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter both the numbers :");
    scanf("%d %d", &num1, &num2);
    printf("Sum : %d\n", num1 + num2);
    printf("Difference : %d\n", num1 - num2);
    printf("Product : %d\n", num1 * num2);
    if (num2 != 0)
        printf("Quotient : %d\n", num1 / num2);
    else
        printf("Division with 0 is not allowed");
    return 0;
}