// Factorial Calculation Using Recursion 
// Write a C++ program that calculates the factorial of a number using recursion. 
// Objective: Understand recursion in functions. 

#include<iostream>
using namespace std;

int factorial (int n){
    if (n==0){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main(){
    int num,result;

    cout<<"Enter number:";
    cin>>num;
    if(num<0){
        cout<<"Factorial is not possible.. IT'S NEGATIVE NUMBER:"<<endl;
    }
    else{
        result=factorial(num);
        cout<<"Factorial of "<<num<<" is "<<result<<endl;
    }

    return 0;

}