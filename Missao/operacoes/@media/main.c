#include <stdio.h>

int main (){
    float num1;
    float num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    float average = (num1+num2)/2;
    
    printf("%.1f\n", average);
    
    return 0;
    
}