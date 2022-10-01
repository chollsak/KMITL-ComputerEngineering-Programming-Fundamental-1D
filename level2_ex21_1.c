#include <stdio.h>

int main(){
    
    int n,i,j;
    printf("Enter number: ");
    scanf("%d",&n);
    while(j<n){
        for(i=0;i<n;i++){
            printf("*");
    }
    printf("\n");
    j++;
    }

    return 0;
}
