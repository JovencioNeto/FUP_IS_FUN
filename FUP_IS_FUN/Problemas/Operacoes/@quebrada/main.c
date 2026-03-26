#include <stdio.h>

void divide (int num1, int num2);

int main(){
    int num1;
    int num2;
    
    scanf ("%d", &num1);
    scanf ("%d", &num2);
    
    divide(num1,num2);
    
    return 0;
}

void divide (int num1, int num2){
    int divideInt = num1 / num2;
    int rest = num1 % num2;
    float divideFloat = (float)num1 / (float)num2;
    
    printf("%d\n", divideInt);
    printf("%d\n", rest);
    printf("%.2f\n", divideFloat);
}