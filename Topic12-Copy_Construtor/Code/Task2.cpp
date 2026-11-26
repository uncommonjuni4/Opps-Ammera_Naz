//Copy Constructor — Task 02
//10 Marks
// Beginner Level
//
//Employee Information System
//Ab ek naya class Employee banao.
//
//Requirements:
//1. Private variables:
//   - name
//   - salary
//   - id
//2. Parameterized constructor banao.
//3. Copy constructor banao jo teeno values copy kare.
//4. display() function banao.
//Main function:
//- e1 banao: "Junaid", 50000, 101
//- e2 ko e1 se copy karo.
//- Dono objects ka data display karo.
//Expected Output:
//Employee Name: Junaid
//Salary: 50000
//ID: 101
//
//Employee Name: Junaid
//Salary: 50000
//ID: 101



#include <iostream>
using namespace std ;


class Employee{
	private :
		string name ;
	
		int salary;
		int id ;
		public:
			
			
		Employee(string n , int s, int ID ){
	 	name =n;
	 	salary= s;
	 	id = ID;
	 }	;
	 
	Employee(const  Employee  &e1){
	 	
	 		name =e1.name;
	 	salary= e1.salary;
	 	id = e1.id ;
	 }	;
	 
			void display(){
			cout<<"Employee Name:  "<<name<<endl;
			cout<<"Employee Salary :  "<<salary<<endl;
			cout<<"Employee ID  :  "<<id<<endl;	
			}
	
	 
	
};




int main(){
      Employee  s1( "Junaid", 50000, 101)	;
      
       Employee  s2( s1);
       
       s1.display();
       s2.display();

	return 0 ;
	
}
