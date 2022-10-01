#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด 
//กับจำนวนที่น้อยที่สุดเป็นลำดับสอง 

int main()

{

    int a,b,c;

    int min,mid,max,i=1;

    printf("Enter number: ");
    scanf("%d",&a);
    printf("\nEnter number: ");
    scanf("%d",&b);
    printf("\nEnter number: ");
    scanf("%d",&c);

    if(((a<b)&&(b<c)) || ((a>b)&&(a<c)))
    {
        min=a;
        mid=b;
        max=c;
    }
    if(((b<a)&&(a>c)) || ((a>b)&&(a<c)))
    {
        min=c;
        mid=a;
        max=b;
    }
    if(((c<a)&&(c>b)) || ((c>a)&&(c<b)))
    {
        min=b;
        mid=c;
        max=a;
    }
    printf("\nMid is %d",mid);
    printf("\nMin is %d",min);

    printf("\nMid + Min = %d", min + mid);
    return 0;
}

