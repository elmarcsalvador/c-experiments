//sum and avg of 3 no(s)

#include <stdio.h>
void main(){
    int a,b,c,sum=0,avg=0;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a,&b,&c);
    sum = a+b+c;
    avg = sum/3;
    printf("Sum = %d\n Avg = %d", sum, avg);
}