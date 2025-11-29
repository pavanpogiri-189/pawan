#include<stdio.h>
void main(){
    int n,i,j,mul;
    printf("Enter n value :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
    mul=j*n;
    printf("\n %d * %d = %d",n,j,mul);
    }
    n=n+1;
    printf("\n");
    }
}