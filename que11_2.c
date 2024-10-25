// //pyramid program
//        1  
//      2   3  
//    4    5    6  
// 7   8     9    10 

#include<stdio.h>
int main(){
    int row,col;
    int num=1;

    for(row=1;row<=4;row++){
        for(col=row;col<4;col++){
            printf(" ");
        }

        for(col=1;col<=row;col++){
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
