#include <stdio.h>
# include <math.h>

void verifyOperator(char operator, float num1);

int main() {
    char operator;
    float num1;
    scanf(" %c", &operator);
    scanf("%f", &num1); 
    
    verifyOperator(operator, num1);
    return 0;
}

void verifyOperator(char operator, float num1) {
    if (operator == 'c' || operator == 'C') {
        printf("%.0f\n", ceil(num1));
    } else if (operator == 'f' || operator == 'F') {
        printf("%.0f\n", floor(num1));
    } else if (operator == 'r' || operator == 'R') {
        printf("%.0f\n", round(num1));
    } else {
        printf("Operador invalido!\n");
    }
}