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
		
		double getBalance(){
			return walletBalance;
		}
		
		void addMoney(double balance){
			walletBalance += balance;
			cout<<"Balance Added"<<endl;
		}
		
		virtual void displayProfile() = 0;
};

class Buyer: public User{
	public:
		Buyer(string n, string e, double wB): User(n, e, wB){
			
		}
		
		void displayProfile(){
        cout<<"Buyer Profile"<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"Email: "<< email<<endl;
        cout<<"Wallet Balance: "<<walletBalance<<endl;
        cout<<"Purchase History: [Item1, Item2]"<<endl;
    }
};

class Seller: public User{
	public:
		Seller(string n, string e, double wB): User(n, e, wB){
			
		}
		
		void displayProfile(){
        cout<<"Seller Profile"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<< email<<endl;
        cout<<"Wallet Balance: "<<walletBalance<<endl;
        cout<<"Sales History: [ItemA, ItemB]"<<endl;
    }

};

class PaymentMethod{
	virtual void pay(User &user, double pay) = 0;
};

class CreditCard: public PaymentMethod{
	private:
		int cardNo, cvc;
		string exp;
	public:
		void getDetails(){
			cout<<"Enter Credit Card No: ";
			cin>>cardNo;
			cout<<"Enter Expiry Date MM-YY: ";
			cin>>exp;
			cout<<"Enter CVC: ";
			cin>>cvc;
		}
		
		void pay(User &user, double amount){
			getDetails();
			
			if(amount <= user.getBalance()){
				user.walletBalance -= amount;
			   cout<<amount<<" has been deducted";
			}
			else{
				cout<<"Insufficient Balance!";
			}
			
		}
};

int main(){
	User *b = new Buyer("Saad", "saad@gmail.com", 10000);
	User *s = new Seller("Ali", "ali@gmail.com", 4000);
	
	b->displayProfile();
	s->displayProfile();
	
	b->addMoney(5000);
	
	CreditCard c;
	c.pay(*b, 1000);
	
	delete b, s;
	
	return 0;
}
