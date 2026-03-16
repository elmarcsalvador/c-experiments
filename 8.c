//to find the factorial of a given no using recursion.
#include <stdio.h>
void main(){
    int fact(int x);
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
}

int fact(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}