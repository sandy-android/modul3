// // Write a Program of find the element of given position from the array. 

// #include<stdio.h>
// int main(){
//     int arr[20][20],row,col,prow,pcol;
//     int i,j;
//     printf("Enter the number of rows:\n");
//     scanf("%d",&row);
//     printf("Enter the number of columns:\n");
//     scanf("%d",&col);

//     printf("enter elements for matrix:\n",row,col);
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++);{
//             scanf("%d",&arr[i][j]);
//         }
//     }
    

// }



#include<stdio.h>

int main() {
    int arr[5];
    int position;

    printf("Enter 10 elements for the array:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position  to find the element: ");
    scanf("%d", &position);
    if(position < 1 || position > 5) {
        printf("\nInvalid position!\n");
        printf("\nPlease enter a number from 1 to 5.\n");
    } else {
        printf("Element at position %d is: %d\n", position, arr[position - 1]);
    }

    return 0;
}
