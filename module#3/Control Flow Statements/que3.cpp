// Multiplication Table 
// Write a C++ program to display the multiplication table of a given number using a for 
// loop. 
// Objective: Practice using loops. 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number for multiplication:";
    cin>>num;
    cout<<"Multiplication Table of"<<num<<":"<<endl;

    for(int i=1;i<=10;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}