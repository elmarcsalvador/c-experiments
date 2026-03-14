// display the fibonacci series till given no n.
#include<stdio.h>
void main(){
    int n,a=0,b=1,c;
    printf("Enter a no: \n");
    scanf("%d", &n);
    printf("Fibonacci Series\n");

    while(a <= n){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}