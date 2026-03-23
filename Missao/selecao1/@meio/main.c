#include <stdio.h>

void verifyMidNumber(int num1, int num2, int num3);

int main() {
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    verifyMidNumber(num1, num2, num3);
    return 0;
}

void verifyMidNumber(int num1, int num2, int num3) {
    int midNumber = num1;
    
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        midNumber = num1;
        printf("%d\n", midNumber);
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        midNumber = num2;
        printf("%d\n", midNumber);
    } else if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        midNumber = num3;
        printf("%d\n", midNumber);
    }
    else {
        printf("Numero invalido!\n");
    }
    
}