#include <stdio.h>

int main() {
    float price;
    int installmentsQuantity;

    scanf("%f", &price);
    scanf("%d", &installmentsQuantity);

    for (int i = 1; i <= 10; i++) {
        float fees = (i - 1) * 0.05; 
        float all = price * (1 + fees);
        float installmentValue = all / i;

        if( i == installmentsQuantity){
            printf("%.2f\n", installmentValue);
            printf("%.2f\n", all);
        }
    }

    return 0;
}