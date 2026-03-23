#include <stdio.h>

int verify(int num1, int num2, int num3) {
    if (num1 == num2 && num2 == num3) {
        return 3; 
    } else if ((num1 == num2 && num2 != num3) || (num1 == num3 && num1 != num2) || (num2 == num3 && num2 != num1)) {
        return 2; 
    } else if ((num1 != num2 && num1 == num3) && (num1 == num2 && num1 != num3) && (num2 == num3 && num2 != num1)) {
        return 1; 
    } else {
        return 0;
    }
    return 0;
}

int main() {
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    printf("%d\n",verify(num1, num2, num3));
    return 0;
}