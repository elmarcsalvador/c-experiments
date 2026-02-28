//To find the roots of a given quadratic equation
#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,d,r1,r2;
    printf("Enter a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    d = b*b - 4*a*c;
    
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("The roots are real and different: %lf and %lf", r1, r2);
    } else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("The roots are real and equal: %lf", r1);
    } else {
        printf("No real roots.");
    }
}