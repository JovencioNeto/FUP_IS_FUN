#include <stdio.h>
#include <math.h>

int main (){
    double side1;
    double side2;
    double side3;
    
    scanf("%lf", &side1);
    scanf("%lf", &side2);
    scanf("%lf", &side3);
    
    double p = (side1 + side2 + side3)/2.0;
    double area = sqrt(p*(p-side1)*(p-side2)*(p-side3));
    
    printf("%.2lf\n", area);
    
    return 0;
}