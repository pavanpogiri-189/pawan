#include<stdio.h>
void main(){
    int sub1,sub2,sub3;
    printf("Enter sub1 and sub2 and sub3 marks:");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    if(sub1>35||sub2>35||sub3>35){
        printf("Fail");
    }
    else{
        printf("Pass");
    }
    }