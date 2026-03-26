#include <stdio.h>

void calculator (int num1, int num2);

int main(){
    int num1;
    int num2;
    
    scanf ("%d", &num1);
    scanf ("%d", &num2);
    
    calculator(num1,num2);
    
    return 0;
}

void calculator (int num1, int num2){
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float divide = (float)num1 / (float)num2;
    int rest = num1 % num2;

    printf("%d\n", sum);
    printf("%d\n", difference);
    printf("%d\n", product);
    printf("%.2f\n", divide);
    printf("%d\n", rest);
}