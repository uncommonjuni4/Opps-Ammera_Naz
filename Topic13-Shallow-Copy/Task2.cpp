//Task 02 — Employee Salary System
//Beginner
//10 Marks
//
//Scenario
//Ek Employee class banao jisme employee ki salary dynamic memory mein store ho aur ek object se doosra object copy ho.
//Requirements
//1. Employee class banao.
//
//2. Private data member:
//
//- int* salary
//
//3. Parameterized constructor:
//- new use karke dynamic memory allocate karo.
//- Salary initialize karo.
//4. Copy constructor:
//- const reference use karo.
//- Pointer ka address copy karo.
//- Nayi memory allocate nahi karni.
//5. Functions:
//- display() — salary aur memory address show kare.
//- updateSalary(int amount) — salary update kare.
//Main function
//1. e1 object banao, salary 50000 rakho.
//2. e2 ko e1 se copy karo.
//3. Dono objects ki information display karo.
//4. e2 ke through salary 60000 update karo.
//5. Dobara dono objects ki salary display karo.
//Expected Output
//Before Update:
//
//Employee 1 Salary: 50000
//Employee 2 Salary: 50000
//
//After Update:
//
//Employee 1 Salary: 60000
//Employee 2 Salary: 60000
//
//
//Dono objects ke memory addresses bhi same hone chahiye.


#include<iostream>
using namespace std ;

class Employee{
	private :
		 int *salary;
		 
	public:
		
	Employee(int s){
		 salary = new int(s);
	
	}
	
	
	Employee(const Employee &s1){
		salary = s1.salary;	
	 
	}
	
	
	
	void display(string  name ){
			
	 
		cout<<name <<" : "<<*salary<<endl;
	}
	
	void updatesalary(int am){
		*salary = am;
	}	
	
	
	~Employee(){
		delete salary;
		
	}
	
	
};


int main(){
	Employee s1(5000);
	
	Employee s2(s1);
		cout<<"Before "<<endl;
	s1.display("Emollye 1");
	s2.display("Emlooy  2 ");
	
	
	s2.updatesalary(6000);
		cout<<"After :"<<endl;
	s1.display("Emollye 1 ");
	s2.display("Emlooy  2 ");
	return 0;
}
