#include <stdio.h>
struct Product
{
    int Id;
    char name[100];
    int Quan;
    float price;
}pr;

int main(){
    
    printf("Enter Product ID : \n");
    scanf("%d", &pr.Id);
    printf("Enter Name : \n");
    scanf("%s", &pr.name);
    printf("enter Quantity: \n");
    scanf("%d",&pr.Quan);
    printf("Enter price : \n");
    scanf("%f", &pr.price);

    float TotalPrice=(pr.Quan*pr.price);


   
    printf("Total Cost = %f", TotalPrice);
}
