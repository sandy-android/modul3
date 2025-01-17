// Inheritance Example 
// o Write a program that implements inheritance using a base class Person and derived 
// classes Student and Teacher. Demonstrate reusability through inheritance. 
// o Objective: Learn the concept of inheritance.

#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string n, int a){
        name=n;
        age=a;
    }

    void displayPersonInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};

class Student : public Person{
    private:
    string studentID;

    public:
    Student(string n, int a, string id) : Person(n,a){
        studentID=id;
    }
    
    void displayStudentInfo(){
        displayPersonInfo();
        cout<<"Studen ID :"<<studentID<<endl;
    }
};

class Teacher : public Person{
    private:
    string subject;

    public:
    Teacher(string n,int a, string s) : Person(n,a){
        subject = s;
    }

    void displayTeacherInfo(){
        displayPersonInfo();

        cout<<"Subject: "<<subject<<endl;
    }
};

int main(){
    Student s1("Nehal",22,"ab123");
    Teacher t1("Sandy",34,"Polity");

    cout<<"Student Information :"<<endl;
    s1.displayStudentInfo();

    cout<<"Teacher Information :"<<endl;
    t1.displayTeacherInfo();

    return 0;
}