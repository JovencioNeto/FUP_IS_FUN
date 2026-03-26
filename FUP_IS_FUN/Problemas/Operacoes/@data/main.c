#include <stdio.h>

void date (int hour, int minute, int day, int month, int year);

int main(){
    int hour, minute, day, month, year;

    scanf ("%d", &hour);
    scanf ("%d", &minute);
    scanf ("%d", &day);
    scanf ("%d", &month);
    scanf ("%d", &year);
    
    date(hour, minute, day, month, year);
    
    return 0;
}

void date (int hour, int minute, int day, int month, int year){
    printf("%02d:%02d %02d/%02d/%02d\n", hour, minute, day, month, year % 100);
}