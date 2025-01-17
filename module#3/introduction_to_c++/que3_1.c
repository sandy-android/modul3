// POP vs. OOP Comparison Program 
// o Write two small programs: one using Procedural Programming (POP) to calculate the 
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
// class and object for the same task. 

//Q1. POP to calculate area of ractangle 

#include<stdio.h>
int main(){
    float length;
    float width;
    float area;

    printf("Enter length:\n");
    scanf("%f",&length);
    printf("Enter width:\n");
    scanf("%f",&width);
    area=length*width;

    printf("area of rectangle is = %.2f",area);
    return 0;





}