// Variable Scope 
// o Write a program that demonstrates the difference between local and global 
// variables in C++. Use functions to show scope. 
// o Objective: Reinforce the concept of variable scope. 

#include<iostream>
using namespace std;

int GLOBALvariable=5;

void displayGLOBAL(){
    cout<<"GLOBAL variable in function:"<<GLOBALvariable<<endl;
}
void demostrateLOCAL(){

    int LOCALvariable=10;
    cout<<"LOCAL variable in function:"<<LOCALvariable<<endl;

}

int main(){
    cout<<"Global variable in main function:"<<GLOBALvariable<<endl;

    displayGLOBAL();
    demostrateLOCAL();

    return 0;
}
