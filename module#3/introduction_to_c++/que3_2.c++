// 3. POP vs. OOP Comparison Program 
// o Write two small programs: one using Procedural Programming (POP) to calculate the 
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
// class and object for the same task. 

// Q.2. OOP- area of ractangle

#include<iostream>
using namespace std;

class Rectangle {
    private:
        float length,width;
    public:
        Rectangle(float l, float w){
            length=l;
            width=w;
        }

        float AreaofRectangle(){
            return length*width;
        }
}; 

int main(){
    float length,width;
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;

    Rectangle r(length,width);

    cout<<"Area of Rectangle is ="<<r.AreaofRectangle()<<endl;
    return 0; 
}