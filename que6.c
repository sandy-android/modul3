// Write a program user enter the 5 subject’s mark. 
// You have to make a total and find the percentage. percentage > 75 you have to print 
// “Distinction”  
// percentage > 60 and percentage <= 75 you have to print “First class”  
// percentage >50 and percentage <= 60 you have to print “Second class”  
// percentage > 35 and percentage <= 50 you have to print “Pass class”  
// Otherwise print “Fail”.

#include<stdio.h>
int main(){
    int maths,physics,chemistry,english,computer,total;
    float percentage;
    

    printf("Enter marks of maths\n");
    scanf("%d",&maths);
    printf("Enter marks of physics\n");
    scanf("%d",&physics);
    printf("Enter marks of chemistry\n");
    scanf("%d",&chemistry);
    printf("Enter marks of english\n");
    scanf("%d",&english);
    printf("Enter marks of computer\n");
    scanf("%d",&computer);

    total=maths+physics+chemistry+english+computer;
    percentage=total/5;

    printf("total marks is : %d\n",total);
    printf("percentage is : %f\n",percentage);

    if(percentage>75){
        printf("Distinction\n");
    }
        else if(percentage>60 && percentage<=75){
            printf("First class\n");

        } else if(percentage>50 && percentage<=60){
            printf("Second class\n");
        }
        else if(percentage>35 && percentage <=50){
            printf("Pass class\n");
        }
        else{
            printf("Fail\n");
        }
        return 0;
    }




