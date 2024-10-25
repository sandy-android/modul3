// find compound interest
#include<stdio.h>
#include<math.h>
int main(){
    float amount,principal,rate,time,ci;
    printf("Enter principal\n");
    scanf("%f",&principal);
    printf("Enter rate and time\n");
    scanf("%f %f",&rate,&time);
    amount=principal*pow((1+(rate/100)),time);
    ci=amount-principal;
    printf("compound interest=%f",ci);
    return 0;
}