//Task 05: Private Method Access Using Scope Resolution
//Medium
//Topic: Private Method + Public Method + Scope Resolution
//
//Create a class BankAccount with these requirements:
//1. Create a private attribute balance = 5000.
//2. Declare a private method showBalance().
//3. Define showBalance() outside the class using ::.
//4. Create a public method display() inside the class.
//5. display() ke andar private method showBalance() call karo.
//6. main() mein object create karke sirf display() call karo.
//Expected Output:
//===== Bank Account =====
//Current Balance: 5000


#include<iostream>
using namespace std ;

class  BankAccount{
	private :
	 int balance = 5000;
	 void showBalance();
	public : 
	void  display(){
		showBalance();
	}
};




void BankAccount :: showBalance(){
	 	cout<<"========= Bank Account =========="<<endl;
	 	cout<<"Current Balance: "<<balance;
	 };




int main(){
	
	 BankAccount Obj1;
	Obj1.display();
	
	
	return 0 ;
}
