//check if a given no is odd or even
#include <stdio.h>
void main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even.",n);
    }
    else{
        printf("%d is odd.",n);
    }
}