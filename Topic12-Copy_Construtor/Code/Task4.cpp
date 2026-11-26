//Task 04 — Bank Account Copy System
//Intermediate
//10 Marks
//
//Scenario
//Ek bank account system banao jahan ek account ki information copy karke doosra account create kiya ja sake.
//Requirements
//1. BankAccount class banao.
//
//2. Private data members:
//- accountHolder — string
//- accountNumber — int
//- balance — double
//3. Parameterized constructor banao.
//
//4. Copy constructor banao.
//
//5. display() function banao.
//Main function mein
//- account1 banao:
//  - Account Holder: "Junaid"
//  - Account Number: 12345
//  - Balance: 50000
//- account2 ko account1 se copy karo.
//- account3 ko bhi account1 se copy karo.
//- Teeno accounts ka data display karo.
//Expected Output
//Account Holder: Junaid
//Account Number: 12345
//Balance: 50000
//
//Account Holder: Junaid
//Account Number: 12345
//Balance: 50000
//
//Account Holder: Junaid
//Account Number: 12345
//Balance: 50000



#include <iostream>
using namespace std ;


class BankAccount{
	private :
		string accountHolder ;
	
		int accountNumber ;
		double  balance ;
		public:
			
			
	 BankAccount(string n , int  N, int b ){
	 	accountHolder =n;
	 	 accountNumber= N;
	 	balance = b;
	 }	;
	 
	BankAccount(const	BankAccount   &s1){
	 	
	 accountHolder=s1.accountHolder;
	 	 accountNumber= s1.accountNumber;
	 balance= s1.balance;
	 }	;
	 

	 
			void display(){
			cout<<"Account Holder:  "<<accountHolder<<endl;
			
			cout<<"Account Number:  "<<accountNumber<<endl;
			cout<<"balance :  "<<balance<<endl;	
	}
	
	 
	
};




int main(){
    BankAccount s1("Junaid", 12345, 5000)	;
      
      BankAccount  s2( s1);
      
      BankAccount  s3 (s1);
       
       s1.display();
       s2.display();
       s3.display();

	return 0 ;
	
}
