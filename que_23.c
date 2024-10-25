 //Write a program to sort the numbers using pointer and functions.
 
 #include<stdio.h>

void sort(int*arr,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(arr+i)>*(arr+j)){
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}

int main(){
    int n;
    printf("\nEnter the number of elements:\n");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter %d numbers: \n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted numbers:\n");
    for (int i=0;i<n;i++){
        printf("%d ",*(arr + i));
    }

    return 0;
}

