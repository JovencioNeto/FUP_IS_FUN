#include <stdio.h>

int main (){

    int quantity1, quantity2, quantity3;
    float value1, value2, value3;
    float valueReceived;
    float change;
    scanf("%d", &quantity1);
    scanf("%d", &quantity2);
    scanf("%d", &quantity3);
    scanf("%f", &value1);
    scanf("%f", &value2);
    scanf("%f", &value3);
    scanf("%f", &valueReceived);
    change = valueReceived - ((quantity1 * value1) + (quantity2 * value2) + (quantity3 * value3));

    printf("%.2f\n", change);
    
    return 0; 
}