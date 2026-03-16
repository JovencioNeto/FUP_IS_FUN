#include <stdio.h>

int main(){
    double celsius;
    
    scanf("%lf", &celsius);
    
    double fahrenheit = (1.8* celsius ) + 32.0;
    
    printf("%lf\n", fahrenheit);
    
    return 0;
    
}