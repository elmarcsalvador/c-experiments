//to search for a given element in an aay
#include <stdio.h>
int main(){
    int n, i, q, flag = 0;
    int a[10];

    printf("Enter size: \n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: \n");
    scanf("%d", &q);

    for(i = 0; i < n; i++){
        if(a[i] == q){
            printf("Element found at position %d", i + 1);
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("Element not found");
    }
    return 0;
}