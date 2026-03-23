#include <stdio.h>
void verifyAge(int age, char name[]);

int main() {
    int age;
    char name[50];
    scanf("%s", name);
    scanf("%d", &age);

    verifyAge(age, name);

    return 0;
}

void verifyAge(int age, char name[]) {
    if (age<12){
        printf("%s eh crianca\n", name);
    }
    else if(age>=12 && age<18){
        printf("%s eh jovem\n", name);
    }
    else if (age>=18 && age < 65){
        printf("%s eh adulto\n", name);
    } 
    else if (age >= 65 && age < 1000){
        printf("%s eh idoso\n", name);
    }
    else {
        printf("%s eh mumia\n", name);
    }
}