#include <stdio.h>

int main(){

    int i = 0,j = 0,n;
    scanf("%d", &n);
    
    while(i < n){
        while(j < n){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }


    return 0;
}
