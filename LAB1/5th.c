#include <stdio.h>
struct Rectangle
{
    float Length;
    float Breadth;
}side;

int main(){
    
    printf("Enter Length : \n");
    scanf("%f", &side.Length);
    printf("Enter Breadth : \n");
    scanf("%f", &side.Breadth);

    float Area=side.Length*side.Breadth;
    float Perimeter=2*(side.Length+side.Breadth);


   
    printf("Area of Rectangle and its perimeter = %f %f", Area,Perimeter);
}
