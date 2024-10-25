// Write a program to print the number in reverse order.

#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse number=%d",rev);
}