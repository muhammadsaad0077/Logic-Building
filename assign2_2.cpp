#include<iostream>
using namespace std;

class User{
	public:
		string name;
		string email;
		double walletBalance;
		
		User(string n, string e, double wB){
			name = n;
			email = e;
			walletBalance = wB;			
		}
		
		void addMoney(double balance){
			walletBalance += balance;
		}
		
		virtual void displayProfile() = 0;
};

class Buyer: public User{
	public:
		Buyer(string n, string e, double wB): User(n, e, wB){
			
		}
};

class Seller: public User{
	public:
		Seller(string n, string e, double wB): User(n, e, wB){
			
		}
};

int main(){
	
	return 0;
}
