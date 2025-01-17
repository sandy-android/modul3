#include<iostream>
#include<cmath>
const float CpH=18.50;
const float CpM=0.40;
const float CpD=20.70;
using namespace std;

float serverCost(int nog,int nom){
    float c1=((float)nom/60)*CpH;
    float c2=(nom % 60)*CpM;
    float c3=c1+c2;

    return c3;
}

float FoodCost(float nog){
    return (nog*CpD);
}


int main(){
    string name,Eventname;
    int NumberOfGuest;
    int NumberOfMinutes;

    cout<<"Enter the Event Name :"<<endl;
    getline(cin,Eventname);

    cout<<"Enter First name and Last name of person :"<<endl;
    getline(cin,name);
    
    cout<<"Enter number of guest :"<<endl;
    cin>>NumberOfGuest;

    cout<<"Enter number of Minutes :"<<endl;
    cin>>NumberOfMinutes;

    float noS=(float) ceil(NumberOfGuest/20);
    cout<<endl<<noS;

    float Scost=serverCost(NumberOfGuest,NumberOfMinutes);
    cout<<endl<<"Server Cost="<<Scost;

    float Fcost=FoodCost(NumberOfGuest);
    cout<<endl<<"Food Cost = "<<Fcost;
    float Totalcost = Fcost+(Scost*noS);
    cout<<endl<<"Total cost ="<<Totalcost;
    cout<<"\ndeposite needed ="<<(Totalcost*(0.25));



}