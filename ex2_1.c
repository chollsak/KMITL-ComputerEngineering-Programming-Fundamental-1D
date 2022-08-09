#include <stdio.h>
#include <math.h>
//จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
//BMI = Weight / Height2
//เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร (เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)


int main(){
    double w,h;
    printf("Weight(kg): ");
    scanf("%lf",&w);
    printf("Height(m): ");
    scanf("%lf",&h);
    double BMI = (w/pow(h,2));
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
