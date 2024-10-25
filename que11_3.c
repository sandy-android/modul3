#include<stdio.h>
int main(){
    int row=5;
    int i;
    int j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<row-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}