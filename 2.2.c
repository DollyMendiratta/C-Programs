#include <stdio.h>
int main() {
    float radius;
    printf("Enter radius of the circle :");
    scanf("%f", &radius);
    printf("Area : %.2f", 3.14 * radius * radius);
    printf("Circumference : %.2f", 2 * 3.14 * radius);
    return 0;
}