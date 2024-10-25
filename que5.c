//Write a Program to check the given number is prime or not prime.
#include<stdio.h>
int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            a=1;
            break;
        }
    }
        if(num==1)
        printf("1 is nutral\n");
        else if(a==0)
        printf("The number is Prime\n");
        else{
            
            printf("The number is Not Prime\n");
        }
    


    return 0;

}