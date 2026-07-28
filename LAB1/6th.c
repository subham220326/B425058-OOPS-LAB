#include <stdio.h>
struct Distance
{
    int feet;
   int inch;
}dist;

int main(){
    
    printf("Enter Feet : \n");
    scanf("%d", &dist.feet);
    printf("enter Inch : \n");
    scanf("%d",&dist.inch);

    float Totaldistance=(dist.feet*12 + dist.inch); // Convert feet to inches and add the existing inches


   
    printf("Total Distance in Inches = %f", Totaldistance);
}
