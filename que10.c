// Write a program make a summation of given number(E.g. 1523 ans :-11). 

#include<stdio.h>
int main(){
    int num;
    int sum=0,rem;

    printf("Enter a number:\n");
    scanf("%d",&num);
    
    while(num!=0){
        rem=num%10;
        sum+=rem;
        num/=10;

    }
    printf("Summation of Digit is :%d",sum);
    return 0;
}