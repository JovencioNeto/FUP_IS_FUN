#include <stdio.h>

void verifyNumbers(int sum, int P){
    if (sum % 2 == 0) { 
        if (P == 0) {
            printf("0\n");
        } else {
            printf("1\n"); 
        }
    } else {
        if (P == 0) {
            printf("1\n"); 
        } else {
            printf("0\n"); 
        }
    }

}
int main() {
    int P, D1, D2;
    
    scanf("%d", &P);
    scanf("%d", &D1);
    scanf("%d", &D2);

    int sum = D1 + D2;

    verifyNumbers(sum,P);

    return 0;
}