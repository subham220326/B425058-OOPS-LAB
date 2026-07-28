#include <stdio.h>
struct Student
{
    int RollNo;
    char name[100];
    float CG;
};

int main(){
    printf("enter details of 5 Students");
   
    struct Student stu[5];

    for(int i =0 ;i<5;i++)
    {
        printf("Enter RollNo: \n");
        scanf("%d", &stu[i].RollNo);
        printf("Enter Name : \n");
        scanf("%s", &stu[i].name);
        printf("Enter CGPA: \n");
        scanf("%f", &stu[i].CG);
    }

for(int i=1;i<5;i++)
{
    if(stu[i].CG>=8)
    {
      printf("Student with CG 8 or Greater : %d \n",stu[i].name);
    }
}


}

