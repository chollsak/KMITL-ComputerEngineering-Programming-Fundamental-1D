#include <stdio.h>

int isMax(int, int);

int main(){

    int num1, num2;
    printf("Please Enter number: ");
    scanf("%d", &num1);
    printf("Please Enter second number: ");
    scanf("%d", &num2);

    printf("Max is %d", isMax(num1, num2));

    return 0;
}

int isMax(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
