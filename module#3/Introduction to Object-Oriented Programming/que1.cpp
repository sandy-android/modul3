// Class for a Simple Calculator 
// o Write a C++ program that defines a class Calculator with functions for addition, 
// subtraction, multiplication, and division. Create objects to use these functions. 

#include<iostream>
using namespace std;

class Calculator{
    int a,b;
    int result;
    int add,sub,mul,div;
    int choice;
    public:
    void getdata(){
        add=1;
        sub=2;
        mul=3;
        div=4;

        cout<<"Enter 1st number:\n";
        cin>>a;
        cout<<"Enter 2nd number:"<<endl;
        cin>>b;

        cout<<"Menu for operation:"<<endl;
        cout<<"Add :"<<add<<endl;
        cout<<"Sub :"<<sub<<endl;
        cout<<"Mul :"<<mul<<endl;
        cout<<"Div :"<<div<<endl;

        cout<<"Enter your choice:"<<endl;
        cin>>choice;

    }

    void showdata(){
        if(choice==1){
            result=(a+b);
            cout<<"Sum of :\n"<<a<<" + "<<b<<" = "<<result<<endl;
        }
        else if(choice==2){
            result=(a-b);
            cout<<"Substraction of :\n"<<a<<" - "<<b<<" = "<<result<<endl;
        }
        else if(choice==3){
            result=(a*b);
            cout<<"multiplication of :\n"<<a<<" * "<<b<<" = "<<result<<endl;
        }
        else if(choice==4){
            result=(a/b);
            cout<<"Division of :\n"<<a<<" / "<<b<<" = "<<result<<endl;
            }
            else{
                cout<<"\n select any other operation:"<<endl;
            }
        }

    };

    int main(){
        Calculator c;
        c.getdata();
        c.showdata();
    }
