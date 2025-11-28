#include<stdio.h>
void main()
{
    int a,b,n;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("\n1.to add \n 2.to sub \n 3.to mul\n 4.to div");
    printf("\n*************************************");
    printf("\n enter operator number");
    scanf("%d",&n);
    switch(n){
        case 1:printf("sum of two values:%d",a+b);
        break;
        case 2:printf("sub of two values:%d",a-b);
        break;
        case 3:printf("mul of two values:%d",a*b);
        break;
        case 4:printf("div of two values:%d",a/b);
        break;
        default:printf("enter the correct one .....");
        break;
    }
}