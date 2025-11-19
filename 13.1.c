#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%) :");
    fflush(stdin);
    scanf("%c", &op);
    switch(op) {
        case '+': printf("Result : %d\n", a + b); break;
        case '-': printf("Result : %d\n", a - b); break;
        case '*': printf("Result : %d\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result : %d\n", a / b);
            else
                printf("ERROR");
                break;
        case '%':
            if (b != 0)
                printf("Result : %d\n", a % b);
            else
                printf("ERROR");
                break;
        default: printf("Invalid operator");
    }
    return 0;
}