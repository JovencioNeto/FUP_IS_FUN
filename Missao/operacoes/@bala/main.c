#include <stdio.h>
#include <math.h>

int main (){
    double x1;
    double y1;
    double x2;
    double y2;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    printf("%.2lf\n", distance);
    
    return 0;
}