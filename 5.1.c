#include <stdio.h>
#include <math.h>
int main() {
    float prin, rate, time, amt, si, ci;
    printf("Enter principal, rate and time in years : ");
    scanf("%f %f %f", &prin, &rate, &time);
    si = prin * rate * time;
    amt = prin * pow(1 + rate / 100, time);
    ci = amt - prin;
    printf("The simple interest and compound interest are : %.2f and %.2f", si, ci);
    return 0;
}