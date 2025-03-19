#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    protected:
    int balance = 0;
    
    public:
    void deposit(int amount){
        balance += amount;
        cout<<amount<<" has been deposited"<<endl;
    }
    
    virtual void displayBalance(){
        cout<<"Balance: "<<balance<<endl; 
    }
};

class SavingAccount : public BankAccount{
    public:
    
    void withdraw(int amount){
        if(amount <= balance){
            balance -= amount;
            cout<<amount<<" has been withdraw"<<endl;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    
    void displayBalance() override {
        cout<<"Savings Account: "<< balance<<endl;
    }
};

int main(){
    SavingAccount acc;
    acc.deposit(6000);
    acc.displayBalance();
    acc.withdraw(4000);
}