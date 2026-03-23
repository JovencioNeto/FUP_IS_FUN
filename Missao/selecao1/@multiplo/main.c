#include <stdio.h>

char* check_number(int a){
    int multiple = a%7;
    if (multiple == 0) {
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
