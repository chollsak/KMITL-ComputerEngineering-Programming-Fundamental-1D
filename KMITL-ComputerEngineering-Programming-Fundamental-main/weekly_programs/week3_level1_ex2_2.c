#include <stdio.h>

void myFunction(double w, double h){
    double BMI = (w/(h*h));
    char* sentencesarr[] = {"You are underweight.", "You are healthy.", "You are overweight.", "You are obese"};

    printf ("Your BMI is %.1f ",BMI);
    
    if(BMI<18.5){
        printf("%s", sentencesarr[0]);
    }else if(BMI >= 18.5 && BMI <=24.9){
        printf("%s", sentencesarr[1]);
    }else if(BMI >= 25 && BMI <= 29.9){
        printf("%s", sentencesarr[2]);
    }else{
        printf("%s", sentencesarr[3]);
    }


}

int main(){
    double w,h;
    printf("Weight(kg): ");
    scanf("%lf",&w);
    printf("Height(m): ");
    scanf("%lf",&h);
    myFunction(w,h);
    
    return 0;
}
