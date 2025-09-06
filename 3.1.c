#include <stdio.h>
int main() {
    float celsius, farenheit;
    printf("Enter temperature in celsius : ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in farenheit is : %.2f\n", farenheit);
    return 0;
}