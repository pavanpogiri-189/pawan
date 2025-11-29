#include <stdio.h>
# define MAX 100
struct student
{
    int rollno;
    char name[20];
    int year;
};
void main(){
    int i,n;
    struct student st[MAX];
    printf("Enter no.of Records :");
    scanf("%d",&n);
    printf("Enter student details:");
    for(i=1;i<=n;i++){
        printf("\nEnter Record no %d :",i);
        scanf("%d %s %d",&st[i].rollno,&st[i].name,&st[i].year);
    }
    printf("students Records shown below");
    for(i=1;i<=n;i++){
        printf("\n----------------");
        printf("\n|%d | %s | %d|",st[i].rollno,st[i].name,st[i].year);
    }
}
