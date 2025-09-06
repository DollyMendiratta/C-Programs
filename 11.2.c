#include <stdio.h>
int main() {
    float costPrice, sellingPrice, amount;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", (amount / costPrice) * 100);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", (amount / costPrice) * 100);
    } else {
        printf("No Profit No Loss.\n");
    }
    return 0;
}