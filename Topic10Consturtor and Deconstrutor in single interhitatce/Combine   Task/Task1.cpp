//Task 04 — Person & Student Management
//20 Marks
// Practical Challenge
//
//1. Parent Class: Person
//- Private variable: name
//- Parameterized constructor banao.
//- name ki default value "Unknown" rakho.
//- Constructor mein print karo: Person Constructor Called
//- Destructor mein print karo: Person Destructor Called
//- showName() function banao.
//2. Child Class: Student
//- Publicly Person inherit karo.
//- Private variable: rollNo
//- Parameterized constructor banao.
//- rollNo ki default value 0 rakho.
//- Parent constructor ko initializer list se call karo.
//- Constructor mein print karo: Student Constructor Called
//- Destructor mein print karo: Student Destructor Called
//- showStudent() function banao jo name aur roll number print kare.
//3. Main Function
//Teen objects banao:
//Object	Arguments
//s1	"Ali", 101
//s2	"Ahmed"
//s3	No arguments
//
//Har object ka showStudent() call karo.
//Expected Output
//Person Constructor Called
//Student Constructor Called
//
//Person Constructor Called
//Student Constructor Called
//
//Person Constructor Called
//Student Constructor Called
//
//Student Name: Ali
//Roll Number: 101
//
//Student Name: Ahmed
//Roll Number: 0
//
//Student Name: Unknown
//Roll Number: 0
//
//Student Destructor Called
//Person Destructor Called
//Student Destructor Called
//Person Destructor Called
//Student Destructor Called
//Person Destructor Called




#include <iostream>
using namespace std ;

//parent class

class  Person{
	
	private:
		string name ;
		
		
	public:
	
	Person(string Name =  "Unknown"){
		name = Name ;
		
		cout<<"Person Constructor Called"<<endl;
	}
	~Person(){
		cout<<"Person DeConstructor Called"<<endl;
	}	
	
	void showName(){
		
		
		cout<<"Student Name:"<<name<<endl;
		
	}
	
};


//child class

class Student :public Person{
	 private :
	 	int rollNo;
	 	
	 public:
	 	
	 	Student (string Name =  "Unknown" ,int  RollNo = 0): Person(Name){
	 		
	 		rollNo =RollNo;
	 		
	 			cout<<"Student  Constructor Called"<<endl;
	 			
		 }
		 	~Student (){
		cout<<"Student  DeConstructor Called"<<endl;
	}
	
	void showStudent() {
		showName();
		cout<<"Roll Number:"<<rollNo<<endl;
	}
};



int main(){
	
	
	Student s1("Ali", 101);
	

    Student s2("Ahmed");
    
    
	 Student s3;
	 
	 
	 s1.showStudent();
	 
	 s2.showStudent();
	 
	 
	 s3.showStudent();
	 
	 
	
	return 0;
}
