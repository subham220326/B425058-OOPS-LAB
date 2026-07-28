#include <stdio.h>
struct distance {
    int feet;
    float inches;
};

int main() {
    struct distance d1, d2, total;
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

  
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    printf("\nTotal Distance: %d Feet, %.2f Inches\n", total.feet, total.inches);

    return 0;
}

