// program to display area of circle
#include<stdio.h>
int main(){
    float PI=3.142;
    float radius,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of circle is %f",area);
    return 0;
}