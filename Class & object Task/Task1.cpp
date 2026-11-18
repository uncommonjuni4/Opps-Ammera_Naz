//Part 1: Class and Object
//Easy
//Task 1: Student Information
//
//Create a class named Student.
//
//Requirements:
//
//Create three data members: name, age and marks.
//
//Create a function display() to show student information.
//
//Create two objects of the class.
//
//Enter different information for both students.

#include<iostream>
using namespace std ;

class Student{
	public :
		
		int age ;
		string name ;
	
	    int marks;
	    
	    
	void display(int Age , string Name , int Marks){
		 
		 age = Age ;
		 name = Name;
		 marks = Marks;
		 
		 cout<<"Name : "<<name<<endl;
		 cout<<"Age  : "<<Age<<endl;
		 cout<<"Marks : "<<Marks<<endl<<endl;
	}
};


int main(){
	 Student s1, s2;
	 s1.display(20 , "Muhammmad Junaid hassan" , 80);
	 s2.display(22, "Ali Hassan" , 98);
	
	
	
	
	
	return 0;
}
