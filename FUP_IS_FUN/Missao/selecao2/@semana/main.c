#include <stdio.h>

void isWorking(int day, int hour);

int main(){
    int day,hour;
    scanf("%d", &day);
    scanf("%d", &hour);
    isWorking(day, hour);
    return 0;
}

void isWorking(int day, int hour){
    if(day>=2 && day<=7){
        if (day == 7 && hour>= 8 && hour<= 11){
            printf("SIM\n");
        }else{
            if ((day>=2 && day<=6 && hour >= 8 && hour<= 11) || (day>=2 && day<=6 && hour>=14 && hour<= 17)){
                printf("SIM\n");
            }else{
                printf("NAO\n");
            }
        } 
    }else{
        printf("NAO\n");
    }
}