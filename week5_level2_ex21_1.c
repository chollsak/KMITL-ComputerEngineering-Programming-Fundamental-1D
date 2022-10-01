#include <stdio.h>

void myFunction(int n){
    int i,j=0;
    while(j<n){
        for(i=0;i<n;i++){
            printf("*");
    }
    printf("\n");
    j++;
    }


}

int main(){
    
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    myFunction(n);
    

    return 0;
}
