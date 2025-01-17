// Operator Demonstration 
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
// operators. Perform operations using each type of operator and display the results. 
// o Objective: Reinforce understanding of different types of operators in C++.

#include <iostream>
using namespace std;

int main(){
int a,b;

cout<<"Enter two integers: ";
cin>>a>>b;

cout<<"Arithmetic Operators:"<<endl;
cout<<"a+b= "<<(a+b)<<endl;
cout<<"a-b= "<<(a-b)<<endl;
cout<<"a*b= "<<(a*b)<<endl;
cout<<"a/b = "<<(a/b)<<endl;
cout<<"a % b = "<<(a%b)<<endl;
cout<<endl;

cout<<"Relational Operators:"<<endl;
cout<<"a == b: "<<(a==b)<<endl;
cout<<"a != b: "<<(a!=b)<<endl;
cout<<"a > b: "<<(a>b)<<endl;
cout<<"a < b: "<<(a<b)<<endl;
cout<<"a >= b: "<<(a>=b)<<endl;
cout<<"a <= b: "<<(a<=b)<<endl;
cout<<endl;

bool x,y;
cout<<"Enter two boolean values (0 or 1): ";
cin>>x>>y;

cout<<"Logical Operators:"<<endl;
cout<<"x && y: "<<(x&&y)<<endl;
cout<<"x || y: "<<(x||y)<<endl;
cout<<"!x: "<<(!x)<<endl;
cout<<endl;

unsigned int c,d;
cout<<"Enter two unsigned integers: ";
cin>>c>>d;

cout<<"Bitwise Operators:"<<endl;
cout<<"c & d: "<<(c&d)<<" (Bitwise AND)"<<endl;
cout<<"c | d: "<<(c|d)<<" (Bitwise OR)"<<endl;
cout<<"c ^ d: "<<(c^d)<<" (Bitwise XOR)"<<endl;
cout<<"~c: "<<(~c)<<" (Bitwise NOT)"<<endl;
cout<<"c << 2: "<<(c<<2)<<" (Left shift by 2)"<<endl;
cout<<"c >> 1: "<<(c>>1)<<" (Right shift by 1)"<<endl;
cout<<endl;

return 0;
}