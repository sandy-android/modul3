//  Grade Calculator 
// o Write a C++ program that takes a student’s marks as input and calculates the grade 
// based on if-else conditions. 
// o Objective: Practice conditional statements (if-else). 

#include <iostream>
using namespace std;

int main() {
    float ENGLISH,COMPUTER,PHYSICS,MATHS,CHEMISTRY,TOTAL,PERCENTAGES;

    cout<<"Enter marks of ENGLISH (0-100):";
    cin>>ENGLISH;
    cout<<"Enter marks of COMPUTER (0-100)";
    cin>>COMPUTER;
    cout<<"Enter marks of PHYSICS (0-100)";
    cin>>PHYSICS;
    cout<<"Enter marks of MATHS (0-100)";
    cin>>MATHS;
    cout<<"Enter marks of CHEMISTRT (0-100)";
    cin>>CHEMISTRY;
    
    TOTAL=ENGLISH+COMPUTER+PHYSICS+MATHS+CHEMISTRY;
    PERCENTAGES= TOTAL/5;
    cout<<"ENGLISH="<<ENGLISH<<endl;
    cout<<"COMPUTER="<<COMPUTER<<endl;
    cout<<"PHYSICS="<<PHYSICS<<endl;
    cout<<"MATHS="<<MATHS<<endl;
    cout<<"CHEMISTRY="<<CHEMISTRY<<endl;
    cout<<"\nTotal marks="<<TOTAL<<endl;
    cout<<"\nPercentages="<<PERCENTAGES<<endl<<endl;


    if (PERCENTAGES < 0 || PERCENTAGES > 100) {
        cout << "Invalid input. Marks should be between 0 and 100." << endl;
    } else {
        cout << "Grade: ";
        if (PERCENTAGES >= 90) {
            cout << "A+" << endl;
        } else {
            if (PERCENTAGES >= 80) {
                cout << "A" << endl;
            } else {
                if (PERCENTAGES >= 70) {
                    cout << "B" << endl;
                } else {
                    if (PERCENTAGES >= 60) {
                        cout << "C" << endl;
                    } else {
                        if (PERCENTAGES >= 50) {
                            cout << "D" << endl;
                        } else {
                            cout << "F (Fail)" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}