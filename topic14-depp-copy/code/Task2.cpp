//Task 02 — Employee Salary System
//Beginner
//10 Marks
//
//Scenario
//Ek Employee class banao jisme employee ki salary dynamic memory mein store ho. Ek employee ko copy karke doosra employee create karo, lekin dono ki memory separate honi chahiye.
//1. Class Requirements
//Class name: Employee
//
//Private data member:
//
//- double* salary
//2. Constructors
//Parameterized Constructor
//- new use karke dynamic memory allocate karo.
//- Salary initialize karo.
//Copy Constructor
//- const reference use karo.
//- New memory allocate karo.
//- Existing employee ki salary new memory mein copy karo.
//3. Member Functions
//- display(string name) — salary aur memory address show kare.
//- updateSalary(double amount) — salary update kare.
//4. Main Function
//1. e1 object banao, salary 50000 rakho.
//2. e2 ko e1 se Deep Copy karo.
//3. Dono employees ka data display karo.
//4. e2 ki salary 60000 karo.
//5. Dobara dono employees ka data display karo.
//6. Dono memory addresses compare karo.
//5. Expected Output
//Before Update:
//
//Employee 1 Salary: 50000
//Employee 2 Salary: 50000
//
//After Update:
//
//Employee 1 Salary: 50000
//Employee 2 Salary: 60000
//
//
//Different Memory Addresses
//Important Rules
//- double* use karna hai.
//- Copy constructor mein new use karna hai.
//- const reference compulsory hai.
//- Destructor implement karna hai.
//- Dono objects ki memory separate honi chahiye.
//- e2 update karne se e1 ki salary change nahi honi chahiy

#include<iostream>
using namespace std ;

class Employee{
	private :
	 
	 double* salarys;
	 
	public :
	
	Employee(double m){
		salarys= new double(m);
		
	}
	
	Employee(const Employee &s1){
		salarys = new double(*s1.salarys);
		
	
	
	}
	
	
	void update(double up){
		*salarys +=up;
	}	
	
	void display(string n){
		cout<<n<<*salarys<<endl;
	}
	
	
	~Employee(){
		delete salarys;
	}
	
	
		
		
};




int main(){
	Employee s1(50000);
	
	Employee  s2(s1);
	
	s1.display("Employee 1 Salary:  ");
	s2.display("Employee 2 Salary:  ");
	
	cout<<"After Update:"<<endl;
	
	
	s2.update(10000);	
	
	s1.display("Employee 1 Salary:  ");
	s2.display("Employee 2 Salary:  ");
	


	return 0 ;
}
