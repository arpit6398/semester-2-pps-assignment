#include<stdio.h>
#include <string.h>
struct student{
    char name[20];
    int rollno;

};
int main(){
    int i;
    struct student st[5];
    printf("enter record of 5 students");
    for(i=0;i<5;i++);
    scanf("%d",&st[i].rollno);
    printf ("\n ener name:");
    scanf("%s",&st[i].name);
printf ("\nstudent information list:");
for(i=0;i<5;i++){
    printf("\nrollno:%d,name:%s",st[i].rollno,st[i].name);
}
return 0;
}