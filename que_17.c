//  Write a program to find out the factorial of given number using function. 

#include<stdio.h>
#include<string.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
    return 0;
}
