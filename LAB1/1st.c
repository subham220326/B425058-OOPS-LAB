#include <stdio.h>
struct Student
{
    int Rollno;
    char name[100];
    int age;
    float cgpa;
}stu1;

int main(){
    
    printf("Enter Roll No : \n");
    scanf("%d", &stu1.Rollno);
    printf("Enter Name : \n");
    scanf("%s", &stu1.name);
    printf("enter age: \n");
    scanf("%d",&stu1.age);
    printf("Enter cgpa : \n");
    scanf("%f", &stu1.cgpa);


   
    printf("\n \n \n Roll no - %d \n Name - %s \n Age - %d \n cgpa - %.2f", stu1.Rollno, stu1.name, stu1.age, stu1.cgpa);
}

