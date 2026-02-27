//check if a given no is a strong no
#include<stdio.h>
void main(){
    int n,i,sum=0,a,b=0;
    long int f=1;
    printf("Enter no: \n");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        b = n%10;
        n = n/10;
        for(i=1;i<=b;i++){
            f*=i;
        }
        sum+=f;
        f=1;
    }
    if(sum==a){
        printf("%d is a strong no.",a);
    }
    else{
        printf("%d is not a strong no.",a);
    }
}