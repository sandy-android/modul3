// Type Conversion 
//  Write a C++ program that performs both implicit and explicit type conversions and 
// prints the results. 

#include <iostream>
using namespace std;

int main() {
    //IMPLICIT conversion
    float floatNumber;
    cout << "Enter a float value: ";
    cin >> floatNumber;
    cout << "Your float value is: " << floatNumber << endl;
    int intFromFloat = floatNumber; // Implicit conversion from float to int

    //EXPLICIT conversion
    int intValue;
    cout << "Enter an integer: ";
    cin >> intValue;
    float floatFromInt = static_cast<float>(intValue);

    cout << "Implicit Conversion: " << endl;
    cout << "\nOriginal float: "<<floatNumber<< "\n Converted to int: "<<intFromFloat<<endl;

    cout << "Explicit Conversion: " << endl;
    cout << "\nOriginal int: "<<intValue<< "\n Converted to float: "<<floatFromInt<<endl;

    return 0;
}
