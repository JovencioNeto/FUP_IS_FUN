#include <stdio.h>

int main(){
    int num1;
    int num2;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int division = num1/num2;
    int rest = num1%num2;
    
    printf("%d %d\n", division, rest);

    return 0;
    
}