// find simple interest
#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("please enter principal\n");
    scanf("%f",&principal);
    printf("Enter rate and time \n");
    scanf("%f %f",&rate,&time);
    si=(principal*rate*time)/100;
    printf("simple interest=%f",si);
    return 0;
}