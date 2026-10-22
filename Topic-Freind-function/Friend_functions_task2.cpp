//Task 11: Bank Balance Update Using Friend Function
//Medium
//Topic: Friend Function + Private Data Modification
//
//Create a class named BankAccount.
//
//Requirements:
//1. Create a private attribute balance = 5000.
//2. Declare a friend function addMoney(BankAccount &account, int amount);.
//3. Define the friend function outside the class without ::.
//4. Friend function ke andar private balance ko update karo.
//5. main() mein BankAccount ka object create karo.
//6. Friend function se 2000 add karo.
//7. Updated balance display karo.
//Expected Output:
//Initial Balance: 5000
//Money Added: 2000
//Updated Balance: 7000




#include<iostream>
using namespace std ;

class  BankAccount{
	private :
     int balance =5000;
     
     friend void addMoney(BankAccount &Obj1 ,int amount );
	public : 
	
};

void addMoney(BankAccount &Obj1 , int   amount ){
	
	cout<<"Initial Balance: "<<Obj1.balance<<endl;
	cout<<"Money Added: "<<amount<<endl;
	
	Obj1.balance = Obj1.balance+amount;
	cout<<"Updated Balance: "<<Obj1.balance<<endl;
}







int main(){
	
	 BankAccount Obj1;
	 addMoney(Obj1, 2000);
	
	
	return 0 ;
}
