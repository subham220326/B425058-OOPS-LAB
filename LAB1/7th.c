#include <stdio.h>
struct Student
{
    int Rollno;
    char name[100];
    int markC;
    int markM;
    int markP;
}stu1;

int main(){
    
    printf("Enter Roll No : \n");
    scanf("%d", &stu1.Rollno);
    printf("Enter Name : \n");
    scanf("%s", &stu1.name);
    printf("enter Marks in C: \n");
    scanf("%d",&stu1.markC);
    printf("enter Marks in Math: \n");
    scanf("%d",&stu1.markM);
    printf("enter Marks in Physics: \n");
    scanf("%d",&stu1.markP);

    float avg=(stu1.markC+stu1.markM+stu1.markP)/3;

   printf("Total Average in Subjects : %f",avg);
}
