#include <stdio.h>
\\จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา 
\\ดังตัวอย่าง (Level 2)

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
