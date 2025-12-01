#include<stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle: %.2f", area);
    printf("Perimeter of the rectangle: %.2f", perimeter);
    return 0;
}