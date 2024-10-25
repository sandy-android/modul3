//  Write a program to find out the max number from given 10 elements of array.
#include<stdio.h>

int main() {
    int a[10];
    int max;

    printf("Enter elements of the array:\n");
    for(int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(int i = 1; i < 10; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        }
    printf("The maximum number is: %d\n", max);
    return 0;
}
