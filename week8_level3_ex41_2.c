#include <stdio.h>

int main(){

    int num1, num2, max;
    printf("Please Enter number: ");
    scanf("%d", &num1);
    printf("Please Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        max = num1;
    }else{
        max = num2;
    }

    printf("Max is %d", max);

    return 0;
}
