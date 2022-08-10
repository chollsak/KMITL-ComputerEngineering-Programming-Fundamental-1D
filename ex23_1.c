
int main(){
    int n1,i,j,k,m;
    printf("Enter number: ");
    scanf("%d", &n1);

    for(i=0;i<n1;i++){
        printf("*");
    }printf("\n");

    for(j=2;j<n1;j++){
        printf("*");
        for(k=2;k<n1;k++){
            printf(" ");
        }
            printf("*");
            printf("\n");
    } for(m=0;m<n1;m++){
        printf("*");
    }

    return 0;
}