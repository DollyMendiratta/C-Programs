#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, disc, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
    } else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-disc) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}