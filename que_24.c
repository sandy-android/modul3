// . Write a program to read data from file. 

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    FILE *fp;
    fp=fopen("test.txt","r");

    if(fp==NULL){
        printf("file not found...\n");
        return 1;
    }
    while(fgets(str, sizeof(str),fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
    return 0;

}