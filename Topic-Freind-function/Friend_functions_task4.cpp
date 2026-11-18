//bas task do code me kud liko ga
//Task 14: Employee Salary & Bonus Management System ??
//Medium–Hard
//Topics: Scope Resolution (::) + Const Member Functions (const) + Friend Functions (friend)
//
//Requirements
//Class ka naam Employee rakho.
//
//Private attributes banao:
//
//name = "Ahmed"
//
//salary = 50000
//
//Class ke andar ye methods declare karo:
//
//displayDetails() const
//
//calculateBonus() const
//
//updateSalary(double amount)
//
//Teeno methods ko class ke bahar Employee:: use karke define karo.
//
//displayDetails() employee ka name aur salary display kare.
//
//calculateBonus() salary ka 10% bonus calculate karke display kare.
//
//Friend function declare aur define karo:
//
//increaseSalary(Employee &e, double amount)
//
//Friend function private salary ko directly update kare.
//
//main() mein object bana kar:
//
//Initial details display karo.
//
//Bonus calculate karo.
//
//Salary mein 5000 add karo.
//
//Updated details display karo.
//
//Expected Output
//===== Initial Employee Details =====
//Employee Name: Ahmed
//Employee Salary: 50000
//
//===== Bonus Details =====
//Bonus: 5000




#include<iostream>
using namespace std ;


class Employee{
	private :
		string name = "Ahmad";
		int salary = 4500;
		 int bouns ;
		
    public:
    	void displayDetails() const ;
    	
    	void calculateBonus(int bouns)  ;
    	
    	friend void increaseSalary( Employee &e);
    	
    	
};

void Employee::displayDetails() const {

	
	cout<<"===== Initial Employee Details ====="<<endl;
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee Salary: "<<salary<<endl;
	
};

void Employee::calculateBonus(int bouns)   {
	

cout<<"===== Bonus Details ====="<<endl;
  cout<<"Bonus: "<<bouns<<endl;
};


void increaseSalary( Employee &e){

//Salary Increase: 5000
   cout<<"===== Salary Update ====="<<endl;
//   e.salary += e.bouns;
   
   cout<<"Salary Increase:  "<<e.bouns;
 };



int main(){
	
	 Employee e;
	 
	 e.displayDetails();
	 e.calculateBonus(5000);
     increaseSalary(e , 5000);
     e.displayDetails();
	return 0;
}

//===== Updated Employee Details =====
//Employee Name: Ahmed
//Employee Salary: 55000
