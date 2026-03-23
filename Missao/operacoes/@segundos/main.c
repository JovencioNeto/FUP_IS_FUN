#include <stdio.h>

int main (){
    int sec;
    scanf("%d", &sec);
    
    int hours = sec/3600;
    int rest = sec%3600;
    int minutes = rest/60;
    int seconds = rest%60;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
    
}