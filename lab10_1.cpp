#include <iostream>
using namespace std;

class bankAccount{
	private:
		int balance;
	
	public:
		bankAccount(int bal){
			balance = bal;
		}
		friend void displayBalance(bankAccount acc);
};

void displayBalance(bankAccount acc){
	cout<<"Balance: "<<acc.balance;
}

int main(){
	bankAccount b(3000);
	displayBalance(b);
	
	return 0;
}
