// . Write a program to concatenate the two-string using pointer. 

#include<stdio.h>
#include<string.h>

void concatenate(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while(*str2 !='\0') {
        *str1 =*str2;
        str1++;
        str2++;
    }
    *str1 ='\0';
}

int main() {
    char str1[50], str2[50];

    printf("\nenter first string:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")] ='\0';

    printf("\nenter second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")] ='\0';

    concatenate(str1, str2);
    printf("\nconcatenated string:\n%s\n",str1);

    return 0;
}
