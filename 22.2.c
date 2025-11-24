#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    for (i = 1; i <= n; i++)
    {
        sum += (float)numerator / denominator;

        numerator += 2;     
        if (i == 1)
            denominator = 4;   
        else
            denominator += 2; 
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}