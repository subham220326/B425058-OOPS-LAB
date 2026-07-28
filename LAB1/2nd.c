#include <stdio.h>
struct Employee
{
    int EmployId;
    char name[100];
    float salary;
};

int main(){
    printf("enter details of 3 employess \n");
   
    struct Employee emp[3];

    for(int i =0 ;i<3;i++)
    {
        printf("Enter Employee Id : \n");
        scanf("%d", &emp[i].EmployId);
        printf("Enter Name : \n");
        scanf("%s", &emp[i].name);
        printf("Enter salary: \n");
        scanf("%f", &emp[i].salary);
    }

    printf("the employees present are \n");
for(int i=0;i<3;i++)
{
    printf("\n \n \n Employee Id - %d \n Name - %s \n Salary - %.2f ", emp[i].EmployId, emp[i].name, emp[i].salary);
}

}
