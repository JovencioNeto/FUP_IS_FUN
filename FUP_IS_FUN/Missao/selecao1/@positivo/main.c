#include <stdio.h>

char* check_number(int a){
    if (a >= 0) {
        return "SIM";
    } else {
        return "NAO";
    }
}

int main() {
    int num1;

    scanf("%d", &num1);
    printf("%s\n", check_number(num1));
    return 0;
}