//Task 05 — Employee Management System
//20 Marks
// Intermediate Level
//
//1. Parent Class: Employee
//- Private variable: name
//- Private variable: salary
//- Parameterized constructor banao.
//- name ki default value "Unknown" rakho.
//- salary ki default value 30000 rakho.
//- Constructor message print karo: "Employee Constructor Called"
//- Destructor message print karo: "Employee Destructor Called"
//- showEmployee() function banao jo name aur salary print kare.
//2. Child Class: Manager
//- Publicly Employee inherit karo.
//- Private variable: department
//- Parameterized constructor banao.
//- department ki default value "General" rakho.
//- Parent constructor ko initializer list se call karo.
//- Constructor message print karo: "Manager Constructor Called"
//- Destructor message print karo: "Manager Destructor Called"
//- showManager() function banao jo:
//  - Parent ka showEmployee() call kare.
//  - Department print kare.
//3. Main Function
//Teen objects banao:
//Object	Arguments
//m1	"Ali", 80000, "IT"
//m2	"Ahmed", 60000
//m3	No arguments
//
//Teeno objects ka showManager() call karo.
//Expected Output
//Employee Constructor Called
//Manager Constructor Called
//
//Employee Constructor Called
//Manager Constructor Called
//
//Employee Constructor Called
//Manager Constructor Called
//
//Employee Name: Ali
//Salary: 80000
//Department: IT
//
//Employee Name: Ahmed
//Salary: 60000
//Department: General
//
//Employee Name: Unknown
//Salary: 30000
//Department: General
//
//Manager Destructor Called
//Employee Destructor Called
//Manager Destructor Called
//Employee Destructor Called
//Manager Destructor Called
//Employee Destructor Called



#include<iostream>
using namespace std ;


//parent class 


class Employee {
	private :
		string name ;
		int salary ;
		
    public:
    	
	Employee(string  Name ="Unknown" , int Salary =30000   ){
		name = Name;
		salary = Salary;
		cout<<"Employee Constructor Called"<<endl;
		
		}
	
		~Employee( ){
		
		cout<<"Employee DeConstructor Called"<<endl;
		
		}
		
    void  showEmployee(){
    
    	cout<<"Employee Name:"<<name<<endl;
    	cout<<"Salary:"<<salary<<endl;
    	
	}	
		
};


///child classs

class Manager :public Employee {
	
	private :
		string department;
	public:
	
	 Manager(string  Name ="Unknown" , int Salary =30000  ,string Department  = "General" ):	Employee(Name , Salary ){
	 	 department=Department;
	 		cout<<"Manger Constructor Called"<<endl; 
	 	 
	 }
	 
	  ~Manager(){
	 	
	 		cout<<"Manger DeConstructor Called"<<endl; 
	 	 
	 }
	 
	 
	 void  showManager(){
	 	showEmployee();
	 	
	 	cout<<"Department:"<< department<<endl;
	 	
	 }
	 
};

//3. Main Function
//Teen objects banao:
//Object	Arguments
//m1	
//m2	
//m3	No arguments
//

int main (){
	 Manager s1("Ali", 80000, "IT");
	 
	  Manager s2("Ahmed", 60000);
	  
	    Manager s3;
	    
	    
	    s1.showManager();
	    
	    s2.showManager();
	    s3.showManager();
	
	return  0 ;
}
