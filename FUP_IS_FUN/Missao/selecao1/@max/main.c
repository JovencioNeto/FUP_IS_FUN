#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);
    int result = max(num1, num2);
    printf("%d\n", result);
    return 0;
}