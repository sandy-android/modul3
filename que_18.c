// Write a program to print the Fibonacci series using function. 
#include<stdio.h>

void Fibonacci(int n) {
    int n1=0,n2= 1,num;
    printf("Fibonacci Series: %d, %d", n1,n2);

   
    for (int i = 3; i <= n; i++) {
        int temp = n1+n2;
        printf(", %d",temp); 
        n1 = n2;        
        n2 = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    Fibonacci(n);

    return 0; 
}
