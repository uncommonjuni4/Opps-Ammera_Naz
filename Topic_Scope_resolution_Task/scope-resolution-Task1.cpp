//Task 04: Student Information Using Scope Resolution
//Easy
// Topic: Scope Resolution ::
//
//
//Question: Create a class named Student with the following requirements:
//1. Create two private attributes: name and marks.
//2. Set name = "Ali" and marks = 85.
//3. Declare a public method display() inside the class.
//4. Define display() outside the class using ::.
//5. Create an object in main() and call display().
//Expected Output:
//Student Name: Ali
//Student Marks: 85

#include<iostream>
using namespace std ;

class Student{
	private :
		string name  = "Ali" ;
		int marks = 85 ;
	public : 
	void  display();
};


void Student :: display(){
	
	cout<<"Student Name: "<<name<<endl;
	cout<<"Student Marks: "<<marks<<endl; 
}


int main(){
	
	Student Obj1;
	Obj1.display();
	
	
	return 0 ;
}
