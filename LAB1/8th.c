#include <stdio.h>
struct Employee
{
    int EmployId;
    char name[100];
    float salary;
};

int main(){
    printf("enter details of 5 employess");
   
    struct Employee emp[5];

    for(int i =0 ;i<5;i++)
    {
        printf("Enter Employee Id : \n");
        scanf("%d", &emp[i].EmployId);
        printf("Enter Name : \n");
        scanf("%s", &emp[i].name);
        printf("Enter salary: \n");
        scanf("%f", &emp[i].salary);
    }
struct Employee highSalary=emp[0];

for(int i=1;i<5;i++)
{
    if(emp[i].salary>highSalary.salary)
    {
        highSalary=emp[i];
    }
}

printf("employee with highest salary is : ",highSalary.name);
}

