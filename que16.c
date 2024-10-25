//  Write a program to copy string from one string to another string with user define function.

#include<stdio.h>
#include<string.h>
void copyString(char str1[], char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}

int main(){
    char str1 [50];
    char str2 [50];


    printf("Enter string:\n");
    gets(str2);

    copyString(str2,str1);

    printf("your answer for copy string is : %s\n",str2);
    return 0;
}