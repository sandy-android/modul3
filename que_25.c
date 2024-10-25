// . Write a program to read and write data from the file. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    FILE *fp;

    fp=fopen("C:\\sandy\\data.txt", "w");
    if(fp==NULL){
        printf("File not found...\n");
        return 1;

    }
    fprintf(fp,"hello, good morning mam\n");
    fclose(fp);

    fp==fopen("C:\\sandy\\data.txt","r");
    if(fp== NULL){
        printf("file not found......\n");
        return 1;
    }
    while(fgets(str,sizeof(str),fp)!=NULL){
        printf("%s",str);

    }
    fclose(fp);
    return 0;


}