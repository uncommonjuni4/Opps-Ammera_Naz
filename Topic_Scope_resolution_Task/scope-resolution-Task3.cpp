//Employee Salary Calculator
//Difficulty: Medium · Topic: :: Scope Resolution
//
//New Task
//
//Requirements
//1. Create a class named Employee.
//2. Create private attributes:
//   - name = "Ahmed"
//   - salary = 45000
//3. Declare a public method displayDetails() inside the class.
//4. Define displayDetails() outside the class using ::.
//5. Display the employee's name and salary.
//6. Create an object in main() and call the method.
//Expected Output
//Employee Name: Ahmed
//Employee Salary: 45000
//
//
//
//Rules to remember
//- Function declaration class ke andar hogi.
//- Outside definition mein Employee::displayDetails() use karna hai.
//- Private data ko same class ke member function se access kar sakte ho.
//- main() mein obj.displayDetails(); call karna hai.




#include<iostream>
using namespace std ;

class Emloyee{
	private :
		
		string name = "Ahmad";
		int salary = 45000;
		
	public:
		void displayDetails();
		
		
		
};

   void Emloyee:: displayDetails(){
   	   cout<<"Name =  "<<name<<endl;
   	   cout<<"Salary = "<<salary<<endl;
   	   
   }

int main(){
	
	Emloyee e1;
	
	e1.displayDetails();
	
	
	
	
	return 0;
}
