//Task 3 — Friend Class Practice
//Medium
// 10 Marks
//
//Scenario: Bank Account System
//Tumhein C++ mein 2 classes banani hain:
//- BankAccount
//- BankManager
//BankManager ko BankAccount ka friend banana hai taake woh private data access kar sake.
//Requirements
//1. BankAccount class banao.
//2. Is mein 3 private variables rakho:
//   - accountHolder — string
//   - accountNumber — int
//   - balance — double
//3. Parameterized constructor se values initialize karo.
//4. BankManager ko friend class declare karo.
//5. BankManager mein showAccount(BankAccount &acc) naam ka public function banao, jo private data print kare.
//6. main() mein BankAccount ka object banao.
//7. BankManager ka object banao aur uski help se account details display karo.
//Expected Output
//===== BANK ACCOUNT DETAILS =====
//Account Holder: Junaid
//Account Number: 12345
//Balance: 50000

#include<iostream>

using namespace std ;
 class BankManager;
 
 class BankAccount {
 
 private :
 string	accountHolder ;
   int  accountNumber ;
   double  balance ;
   
   
   friend class BankManager;
   
  public:
   
   BankAccount(string	AccountHolder ,   int  AccountNumber , double  Balance ){
   	accountHolder =	AccountHolder ;
    accountNumber = AccountNumber ;
    balance=   Balance;
   }

};


 class BankManager{

public : 

 void showAccount(BankAccount &acc) {
 	cout<<"===== BANK ACCOUNT DETAILS ====="<<endl;
 	cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Account Number: " << acc.accountNumber << endl;
    cout << "Balance: " << acc.balance << endl;
 }

};


int main(){
	 BankAccount b1("Junaid" ,12345 , 50000);
	 
	 BankManager m1;
	 
	 
	 m1.showAccount(b1);
	
	return 0 ;
	
}
