//Task 10: Student Private Marks Using Friend Function
//Easy
// Topic: Friend Functions
//
//Question: Create a class named Student that allows an external friend function to access its private marks.
//
//Requirements:
//1. Create a class Student.
//2. Declare private attribute int marks = 90;.
//3. Declare a friend function showMarks(Student s); inside the class.
//4. Define showMarks() outside the class without Student::.
//5. Access the private marks attribute using the object.
//6. Create an object in main() and call the friend function.
//Expected Output:
//Student Marks: 90

#include<iostream>
using namespace std ;

class  Student {
	private :
	  int marks= 90;
	  
	  
	  friend void ShowMarks(Student s);
	  
 
	
};



void ShowMarks(Student s){
	cout<<"Student Marks: "<<s.marks<<endl;
}



	
	
	




int main(){
	
	Student s;
	ShowMarks(s);

	
	
	return 0 ;
}

