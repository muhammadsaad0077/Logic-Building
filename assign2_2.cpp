#include<iostream>
#include<string>
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
		virtual void saveHistory(string, string) = 0;
};

class Buyer: public User{
	public:
		string buyerHistory[10][2];
		int count = 0;
		
		Buyer(string n, string e, double wB): User(n, e, wB){
			
		}
		
		void saveHistory(string iName, string iPrice){
		  if(count < 10){
		  	buyerHistory[count][0] = iName;
			buyerHistory[count][1] = iPrice;
			count++;
		  }
		  else{
		  	cout<<"History is full"<<endl;
		  }
			
		}
		
		
		void displayProfile(){
        cout<<"Buyer Profile"<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"Email: "<< email<<endl;
        cout<<"Wallet Balance: "<<walletBalance<<endl;
        cout<<"Purchase History"<<endl;
        if(count == 0){
        		cout<<"No History!"<<endl;
        		return;
			}
        
        for(int i = 0; i < count; i++){
           cout<<"Item Name"<<"\t\t\tItem Price"<<endl;
           cout<<buyerHistory[i][0];
           cout<<"\t\t\t"<<buyerHistory[i][1]<<endl;               	
		}
    }
};

class Seller: public User{
	public:
		string sellerHistory[10][2];
		int count = 0;
		
		Seller(string n, string e, double wB): User(n, e, wB){
			
		}
		
		void saveHistory(string iName, string iPrice){
		  if(count < 10){
		  	sellerHistory[count][0] = iName;
			sellerHistory[count][1] = iPrice;
			count++;
		  }
		  else{
		  	cout<<"History is full"<<endl;
		  }
			
		}
		
		void displayProfile(){
        cout<<"Seller Profile"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<< email<<endl;
        cout<<"Wallet Balance: "<<walletBalance<<endl;
        cout<<"Sales History"<<endl;
        
        if(count == 0){
        		cout<<"No History!"<<endl;
        		return;
			}
        
        for(int i = 0; i < count; i++){
           cout<<"Item Name"<<"\t\t\tItem Price"<<endl;
           cout<<sellerHistory[i][0];
           cout<<"\t\t\t"<<sellerHistory[i][1]<<endl;               	
		}
    }

};

class PaymentMethod{
    public:
	    virtual void pay(User &user, User &user2, double pay) = 0;
};

class CreditCard: public PaymentMethod{
	
	private:
		int cardNo, cvc;
		string exp, itemName;
		
	public:
		void getDetails(){
			cout<<"Enter Item Name: ";
			cin>>itemName;
			cout<<"Enter Credit Card No: ";
			cin>>cardNo;
			cout<<"Enter Expiry Date MM-YY: ";
			cin>>exp;
			cout<<"Enter CVC: ";
			cin>>cvc;
		}
		
		void pay(User &buyer, User &seller, double amount){
			getDetails();
			string itemPrice = to_string(amount);
			
			if(amount <= buyer.getBalance()){
				buyer.walletBalance -= amount;
				seller.walletBalance += amount;
				
				buyer.saveHistory(itemName, itemPrice);
				seller.saveHistory(itemName, itemPrice);
			   cout<<amount<<" has been deducted"<<endl;
			   cout<<amount<<" has been added to seller account"<<endl;
			}
			
			else{
				cout<<"Insufficient Balance!"<<endl;
			}
			
		}
};

int main(){
	User *b = new Buyer("Saad", "saad@gmail.com", 10000);
	User *s = new Seller("Ali", "ali@gmail.com", 4000);
	
	b->addMoney(5000);
	
	CreditCard c;
	c.pay(*b, *s, 1000);
	
	b->displayProfile();
	s->displayProfile();
	
	delete b, s;
	
	return 0;
}
