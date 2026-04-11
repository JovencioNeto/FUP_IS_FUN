#include <stdio.h>

void isTriangle(int l1, int l2, int l3);

int main(){
    int l1,l2,l3;
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);
    isTriangle(l1, l2, l3);
    return 0;
}

void isTriangle(int l1, int l2, int l3){
    int case1 = l1 < l2 + l3;
    int case2 = l2 < l1 + l3;
    int case3 = l3 < l1 + l2;

    if (case1 && case2 && case3){
        printf("True\n");
    }else{
        printf("False\n");
    }
}