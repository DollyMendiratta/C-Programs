#include <stdio.h>
int main() {
    int len, wid;
    printf("Enter length and width of the rectangle :");
    scanf("%d %d", &len, &wid);
    printf("Area : %d\n", len * wid);
    printf("Perimeter : %d\n", 2 * (len + wid));
    return 0;
}