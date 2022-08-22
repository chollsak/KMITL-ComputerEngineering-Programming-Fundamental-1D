#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด 
//กับจำนวนที่น้อยที่สุดเป็นลำดับสอง 
int main(){
   
        int i,j,k,myNumber[2];
        scanf("%d %d %d",&i,&j,&k);
        if(i<j && i<k){
                myNumber[0] = i;
                
        }else if(j<i && j<k){
                
                myNumber[0] = j;
        }else{
                
                myNumber[0] = k;
        }

        if(i>j && i<k || i>k && i<j){
                
                myNumber[1] = i;
        }else if(j>i && j<k || j>k && j<i){
                
                myNumber[1] = j;
        }else if(k>i && k<j || k>j && k<i){
                
                myNumber[1] = k;
        }

        printf("min: %d\n",myNumber[0]);
        printf("mid: %d",myNumber[1]);
        printf("\nresult: %d",myNumber[0] + myNumber[1]);


        return 0;
}
