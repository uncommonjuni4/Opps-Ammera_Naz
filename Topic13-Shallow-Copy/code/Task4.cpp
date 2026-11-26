//ask 04 — Bank Account System
//Intermediate
//10 Marks
//
//Scenario
//Ek Bank Account class banao jisme account ka balance dynamic memory mein store ho. Ek account ko copy karke doosra account create karo aur shared memory ka behavior test karo.
//Requirements
//1. BankAccount class banao.
//
//2. Private data member:
//
//- double* balance
//
//3. Parameterized constructor:
//- new use karke dynamic memory allocate karo.
//- Account balance initialize karo.
//4. Copy constructor:
//- const reference use karo.
//- Pointer ka address copy karo.
//- Nayi memory allocate nahi karni.
//5. Functions:
//- display(string name) — account name, balance aur memory address show kare.
//- deposit(double amount) — balance mein amount add kare.
//- withdraw(double amount) — balance se amount minus kare.
//Main function mein
//1. account1 banao, balance 50000 rakho.
//2. account2 ko account1 se copy karo.
//3. Dono accounts ka data display karo.
//4. account2 ke through 10000 deposit karo.
//5. Dono accounts ka updated balance display karo.
//6. account1 ke through 5000 withdraw karo.
//7. Dobara dono accounts ka balance display karo.
//8. Dono memory addresses compare karo.
//Expected Output
//Initial Balance:
//
//Account 1: 50000
//Account 2: 50000
//
//After Deposit:
//
//Account 1: 60000
//Account 2: 60000
//
//After Withdraw:
//
//Account 1: 55000
//Account 2: 55000
//
//
//Important Rules
//- double* use karna hai.
//- Copy constructor mein new use nahi karna.
//- Destructor abhi mat banana.
//- Dono objects ka memory address same hona chahiye.
//- Deposit aur Withdraw functions khud implement karne hain.


#include<iostream>
using namespace std ;




class BankAccount{

   private :
   double *balance ;
   
   
   
   public :
   
   	BankAccount(int b){
   		
    balance = new double(b);
	 
  }
  
  BankAccount(const BankAccount &s1  ){
   		
    balance = s1.balance;
	 
  }; 
  
  
  void display(string name ){
  	
  	cout<<name <<" : "<<*balance<<endl;
  		cout<<name <<" adderess : "<<balance<<endl;
  }
  
  
  
  void deposit(int d){
  	*balance +=d;
  	
  }
  
  void widraw(int w){
  	  *balance -= w;
  	  
  }
  
   
};












int main(){
	
	BankAccount  s1(50000);
	
	BankAccount  s2(s1);
	
	cout<<"Before : "<<endl;
	
	s1.display("Account 1 ");
	s2.display("Account 2 ");
	
    cout<<"After Deposit:"<<endl;
    
    
    s2.deposit(10000);
    s1.display("Account 1 ");
	s2.display("Account 2 ");
	
    cout<<"After Withdraw:"<<endl;
	
	 s1.widraw(5000);
    s1.display("Account 1 ");
	s2.display("Account 2 ");
	
	return 0 ;
}
