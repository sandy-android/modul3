//  Write program to make a addition of two number using pointer. 
#include<stdio.h>

int main(){
    int n1,n2,sum;
    int *ptr1,*ptr2;

    printf("Enter first number:\n");
    scanf("%d",&n1);

    printf("Enter second number:\n");
    scanf("%d",&n2);
    ptr1=&n1;
    ptr2=&n2;

    sum=*ptr1+*ptr2;

    printf("The sum is: %d\n",sum);

    return 0;
}
