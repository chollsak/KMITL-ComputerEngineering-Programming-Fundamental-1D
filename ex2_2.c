#include <stdio.h>



int main(){
    double w,h;
    printf("Weight(kg): ");
    scanf("%lf",&w);
    printf("Height(m): ");
    scanf("%lf",&h);
    double BMI = (w/(h*h));
    printf ("Your BMI is %.1f ",BMI);
    if(BMI<18.5){
        printf("You are underweight.");
    }else if(BMI >= 18.5 && BMI <=24.9){
        printf("You are healthy.");
    }else if(BMI >= 25 && BMI <= 29.9){
        printf("You are overweight.");
    }else{
        printf("You are obese");
    }

    
    return 0;
}