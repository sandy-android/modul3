// Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case. 
// (Must Be Menu Driven). 

#include<stdio.h>
int main(){
    int choice;
    float area;

    printf("select area of\n");
    printf("1. traingle\n");
    printf("2. rectangle\n");
    printf("3. circle\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch (choice){
        case 1:
        {
            int b,h;
            printf("Enter base of triangle:\n");
            scanf("%d",&b);
            printf("Enter height of triangle:\n");
            scanf("%d",&h);
            area=0.5*b*h;
            printf("Area of triangle: %.2f\n",area);
            break;

        }
        case 2:
        {
            int l,w;
            printf("Enter length of ractangle\n");
            scanf("%d",&l);
            printf("Enter width of the ractangle\n");
            scanf("%d",&w);
            area=l*w;
            printf("Area of the ractangle is : %.0f\n",area);
            break;
        }
        case 3:
        {
            float r;
            printf("Enter radius of circle\n");
            scanf("%f",&r);
            area=(3.14)*r*r;
            printf("Area of circle is: %.2f\n",area);
            break;
        }
        default:
        printf("Invalid choice,,,,\n choose only 1,2,3");
    }

}