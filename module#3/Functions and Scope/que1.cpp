// Simple Calculator Using Functions 
// Write a C++ program that defines functions for basic arithmetic operations (add, 
// subtract, multiply, divide). The main function should call these based on user input. 
// Objective: Practice defining and using functions in C++. 

#include<iostream>
using namespace std;
float add(float a, float b),substract(float a, float b),multiply(float a, float b),divide(float a, float b);

int main(){
    float num1,num2,result;
    char operation;
    
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter operation(+,-,*,/):";
    cin>>operation;

    switch (operation){
        case '+':
            result=add(num1,num2);
            break;
        case '-':
            result=substract(num1,num2);
            break;
        case '*':
            result=multiply(num1,num2);
            break;
        case '/':
        if(num2==0){
            cout<<"Division by zero(0) is not possible:"<<endl;
            return 1;
        }
            result=divide(num1,num2);
             break;

             default:
             cout<<"INVALID OPERATION:"<<endl;
             return 1;

    }

    cout<<"Result: "<<result<<endl;
    return 0;
}

float add(float a, float b){
    return a+b;
}
float substract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    return a/b;
}