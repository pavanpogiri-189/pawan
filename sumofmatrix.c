#include<stdio.h>
void main()
{
    int r,c,a[10][10],b[10][10],i,j,k,sum[10][10];
    printf("Enter no.of rows");
    scanf("%d",&r);
    printf("Enter no. of columns");
    scanf("%d",&c);
    printf("Enter A matrix values");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&a[i][j]);
    }
    }
    printf("Enter B matrix values ");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("  %d",sum[i][j]);
        }
    printf("\n");
    }
    }