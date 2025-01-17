// Class for Bank Account 
// o Create a class BankAccount with data members like balance and member functions 
// like deposit and withdraw. Implement encapsulation by keeping the data members 
// private.

#include<iostream>
using namespace std;

class BankAccount{
    private:
    float balance;
    public:
    BankAccount(float initialBalance=0){
        balance=initialBalance;
    }

    void deposit(float amount){
        if (amount>0){
            balance+=amount;
            cout<<"Deposited: "<<amount<<".\n New balance :"<<balance<<endl;
        }
        else{
            cout<<"Deposite must be more than ZERO. "<<endl;
        }
    }

    void withdraw(float amount){
        if(amount>0){
            if (amount<=balance){
                balance -= amount;
                cout<<"Withdrawn : "<<amount<<".\n Current Balance : "<<balance<<endl;
            }
            else{
                cout<<"Insuficient Balance."<<endl;
            }
        }
        else{
            cout<<"Withdrawal amount shold not be ZERO"<<endl;

        }
    }
    float get_balance(){
        return balance;
    }

};

int main(){
    float balance;
    float initial_balance;
    float deposit_amount;
    float withdrwal_amount;

    cout<<"Enter initial balance :"<<endl;
    cin>>initial_balance;
    BankAccount account(initial_balance);

    cout<<"Enter amount to deposite :"<<endl;
    cin>>deposit_amount;
    account.deposit(deposit_amount);

    cout<<"Enter amount to withdraw: "<<endl;
    cin>>withdrwal_amount;
    account.withdraw(withdrwal_amount);

    cout<<"Available balance is "<<account.get_balance()<<endl;
    return 0;



}