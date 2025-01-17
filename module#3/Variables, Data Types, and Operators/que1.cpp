// Write a C++ program that demonstrates the use of variables and constants. Create 
// variables of different data types and perform operations on them.
#include<iostream>
using namespace std;
int main(){

    int age,r;
    float height;
    char div;
    const float PI=3.1415;

    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter height:";
    cin>>height;
    cout<<"Enter your division:";
    cin>>div;
    cout<<"Enter radius";
    cin>>r;

    float AreaofCIRCLE= PI*r*r;

    cout<<"Age="<<age<<endl;
    cout<<"Height="<<height<<endl;
    cout<<"Divison="<<div<<endl;
    cout<<"Area of circle ="<<AreaofCIRCLE<<endl;

    return 0;
};
