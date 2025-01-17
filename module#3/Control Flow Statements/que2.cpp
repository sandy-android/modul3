// Number Guessing Game 
// o Write a C++ program that asks the user to guess a number between 1 and 100. The 
// program should provide hints if the guess is too high or too low. Use loops to allow 
// the user multiple attempts. 
// o Objective: Understand while loops and conditional logic. 

#include<iostream>
using namespace std;

int main(){
    int secNUM= 84;
    int attempt=0;
    int guess;

    cout<<"                 WELCOME TO THE GUESS NUMBER GAME\n"<<endl;
    cout<<"                     GUESS between 0 to 100 : \n"<<endl;

    cout<<"                         ENTER YOUR CHOISE :";
    cin>>guess;

    while (guess!=secNUM){
        attempt++;

        if(guess>secNUM){
            cout<<"\nyou guess a high number: try new guess..."<<endl;
        }
        else{
            cout<<"\nyou guess a low number: try new guess..."<<endl;
        }
        cout<<"Enter new guess:";
        cin>>guess;
    }
    attempt++;

    cout<<"\nCONGRATULATION YOU GUESSED THE CORRECT NUMBER="<<secNUM<<" in "<<attempt<<" attempts :\n"<<endl;
    

}