#include <stdio.h>
\\จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด 
\\กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
int main(){
   
        int i,j,k,min = 0,mid = 0;
        scanf("%d %d %d",&i,&j,&k);
        if(i<j && i<k){
                min += i;
        }else if(j<i && j<k){
                min += j;
        }else{
                min += k;
        }

        if(i>j && i<k || i>k && i<j){
                mid += i;
        }else if(j>i && j<k || j>k && j<i){
                mid += j;
        }else if(k>i && k<j || k>j && k<i){
                mid += k;
        }

        printf("min: %d\n",min);
        printf("mid: %d",mid);
        printf("\nresult: %d",min+mid);


        return 0;
}
