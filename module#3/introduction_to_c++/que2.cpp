//  Write a C++ program that accepts user input for their name and age and then 
// displays a personalized greeting. 

#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"your name is:"<<name <<endl<<"your age is:"<<age<<endl;

    return 0;

}