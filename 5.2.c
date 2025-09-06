#include <stdio.h>
int main() {
    int totalsec, hours, mins, sec;
    printf("Enter total seconds : ");
    scanf("%d", &totalsec);
    hours = totalsec / 3600;
    mins = (totalsec % 3600) / 60;
    sec = totalsec % 60;
    printf("The time in hours, minutes and seconds is : %02d:%02d:%02d", hours, mins, sec);
    return 0;
}