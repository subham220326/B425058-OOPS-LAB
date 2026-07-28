#include <stdio.h>



struct Student
{
    int Rollno;
    char name[100];
    struct DOB
    {
        int Day;
        int Month;
        int Year;
    }DOB1;
    
}stu1;

int main(){
    
    printf("Enter Roll No : \n");
    scanf("%d", &stu1.Rollno);
    printf("Enter Name : \n");
    scanf("%s", &stu1.name);
    printf("Enter Date Of Birth day \n");
    scanf("%d",&stu1.DOB1.Day);
printf("Enter Date Of Birth Month \n");
    scanf("%d",&stu1.DOB1.Month);
    printf("Enter Date Of Birth Year \n");
    scanf("%d",&stu1.DOB1.Year);

   
    printf("\n \n \n Roll no - %d \n Name - %s \n Date Of Birth - %d %d %d", stu1.Rollno, stu1.name, stu1.DOB1.Day, stu1.DOB1.Month,stu1.DOB1.Year);
}
