#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three sides of a triangle :");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c)
        printf("The triangle is equilateral");
    else if (a == b || b == c || a == c)
        printf("The triangle is isosceles");
    else
        printf("The triangle is scalene");
    return 0;
}