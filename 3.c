//check if a given no is a prime no
#include<stdio.h>
void main(){
    int n,i,ch=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            ch=1;
            break;
        }
    }
    if(ch==0){
        printf("%d is a prime no.",n);
    }
    else{
        printf("%d is not a prime no.",n);
    }
}