#include <stdio.h>

int calculator(int a, int b, char operator) {
    if (operator == '+') {
        return a + b;
    } else if (operator == '-') {
        return a - b;
    } else if (operator == '*') {
        return a * b;
    } else if (operator == '/') {
        return a / b;
    } 

    return 0;
}

int main() {
    int num1;
    int num2;
    char operator;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &operator);
    printf("%d\n", calculator(num1, num2, operator));
    return 0;
} 