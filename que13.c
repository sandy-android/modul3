//  Write a program to sort the array of 5 elements.

#include<stdio.h>
int main(){
    int arr[]={22,54,7,0,98};
    int i;
    printf("Print array\n");
    for(i=0;i<5;i++){
    printf("%d\t",arr[i]);
}
    printf("\n Ascending array\n");
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Print Array\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}