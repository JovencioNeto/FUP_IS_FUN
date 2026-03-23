#include <stdio.h>

int value_absolute(int x) {
    if (x < 0){
        return -x;
    }else{
        return x;
    }
}

int main() {
    
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int subtraction = value_absolute(num1-num2);
    
    printf("%d\n", subtraction);
    return 0;
}