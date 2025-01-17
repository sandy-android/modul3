// String Palindrome Check 
// o Write a C++ program to check if a given string is a palindrome (reads the same 
// forwards and backwards). 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char string[100];
    int length;
    int flag=0;

    cout<<"Enter a string:\n";
    cin>>string;

    length= strlen(string);
    for(int i=0;i<length;i++){
        if(string[i]!=string[length-i-1]){
            cout<<"\nthe string is not palindrome\n"<<endl;
            break;
        }
        else{
            cout<<"\nstring is palindrome:\n"<<endl;
            break;
        }
    }

    return 0;
}