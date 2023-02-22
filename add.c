//write a program to find area of circle,rectangle and triangle.
#include<stdio.h>
int main()
{
    int rad;
    int length = 0;
    int width = 0;
    int breadth = 0;
    float PI = 3.14,area,ci;
    printf("\nEnter the radius of circle : ");
    scanf("%d" ,&rad);
    printf("Enter the length");
    scanf("%d" ,&length);
    printf("Enter the width");
    scanf("%d" ,&width);
    printf("\nEnter the breadth of rectangle");
    scanf("%d" ,&breadth);
    area = PI  * rad * rad;
    printf("\nArea of circle : %f " , area);
    ci = 2 * PI * rad;
    printf("\ncircle : %f" , ci);
    area = length * breadth;
    printf("\nArea of rectangle : %d" , area);
    float Area = (float)(0.5 * length * width);
    printf("Area of traingle is : %f" , area);
    return 0;
}