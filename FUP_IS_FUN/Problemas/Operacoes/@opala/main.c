#include <stdio.h>

void opala (float speed, float minute, float liters);

int main(){
    float speed, minute, liters;

    scanf ("%f", &speed);
    scanf ("%f", &minute);
    scanf ("%f", &liters);
    
    opala(speed, minute, liters);
    return 0;
}

void opala (float speed, float minute, float liters){
    float hours = minute / 60.0;
    float distance = speed * hours;
    float performance = distance / liters;

    printf ("%.2f\n", performance);
}