#include <stdio.h>

char* getAccess(int wifi, int login, int admin) {
    if (!wifi) {
        return "you must connect to wifi";
    }if (!login) {
        return "you need to login first";
    }if (!admin) {
        return "you must to login as admin";
    } else{
        return "done";
    }

    return 0;
}

int main() {
    int wifi,login,admin;
    scanf("%d",&wifi);
    scanf("%d",&login);
    scanf("%d",&admin);

    printf("%s\n",getAccess(wifi, login, admin));
    return 0;
}