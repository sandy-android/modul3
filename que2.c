//Write a program to make a square and cube of number.
#include<stdio.h>
int main(){
    int num,square,cube;
    printf("Enter number\n");
    scanf("%d",&num);
    square=num*num;
    cube=num*num*num;
    // printf("square of %d=%d\n",square);
    // printf("cube of %d=%d\n",cube);
     printf("square of %d=%d\n",num,square);
    printf("cube of %d=%d\n",num,cube);
    return 0;

}