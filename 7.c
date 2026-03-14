//to check if a given no is armstrong or not using functions
#include <stdio.h>

void main(){
    int checkArmstrong(int x);
    int pwr(int base, int exp);
    int getCount(int y);
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    if (checkArmstrong(n)){
        printf("%d is Armstrong no.",n);
    }
    else{
        printf("%d is not an Armstrong no.",n);
    }
}

int pwr(int base, int exp){
    int i, res=1;
    for(i=0;i<exp;i++){
        res*=base;
    }
    return res;
}

int getCount(int y){
    int t=y,count=0;
    while(t!=0){
        count++;
        t/=10;
    }
    return count;
}

int checkArmstrong(int x){
    int t=x,d,sum=0,count;
    
    count = getCount(x);

    while(t!=0){
        d=t%10;
        sum+=pwr(d, count);
        t/=10;
    }

    if(sum==x){
        return 1;
    }
    else{
        return 0;
    }
}