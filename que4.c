// Program to check the given year is leap year or not. 
#include<stdio.h>
int main(){
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("Year is leap year\n");
    }
    else {
        printf("year is not leap year\n");
    }
    return 0;

}