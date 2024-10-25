// . Write a Program of Print a number and check the number is palindrome or not using 
// recursive Function. 

#include <stdio.h>

int reverseNumber(int num, int rev){
    if (num == 0)
        return rev;
    rev = (rev * 10) + (num % 10);
    return reverseNumber(num / 10, rev);
}
int isPalindrome(int num){
    int reversed = reverseNumber(num, 0);
    return (num == reversed);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is palindrome.\n", number);
    else
        printf("%d is not palindrome.\n", number);

    return 0;
}
