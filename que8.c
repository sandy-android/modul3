// Write a program you have to print the Fibonacci series up to user given number. 

#include<stdio.h>
int main(){
    int n1=0,n2=1,num;
    printf("Enter number where to stop:\n");
    scanf("%d",&num);
    printf("%d,%d,",n1,n2);
    int count=2;
    while(count<=num)
    {
        int temp=n1+n2;
        n1=n2;
        n2=temp;
        count++;
        printf("%d,",temp);
    }
}