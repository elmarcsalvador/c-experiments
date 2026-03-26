//to check if a string is palindrome or not
#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++){
        if(str[i] != str[len - i - 1]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}