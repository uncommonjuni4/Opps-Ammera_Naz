//Task 05 — Student Record Management System
//Final Challenge
//10 Marks
//Advanced
//
//Scenario
//Ek Student Record Management System banao jahan student ka record create ho aur existing student ka record copy karke multiple objects banaye ja saken.
//Requirements
//1. Student class banao.
//
//2. Private data members:
//- name — string
//- rollNumber — int
//- marks — double
//- grade — char
//3. Constructors banao:
//- Parameterized constructor — saari information initialize kare.
//- Copy constructor — existing object se saari information copy kare.
//4. Member function:
//
//- display() — student ki complete information show kare.
//Main function mein
//1. student1 create karo:
//   - Name: "Junaid"
//   - Roll Number: 101
//   - Marks: 92.5
//   - Grade: 'A'
//2. student2 ko student1 se copy karo.
//3. student3 ko student2 se copy karo.
//4. student4 ko student1 se copy karo.
//5. Chaaron students ka data display karo.
//Expected Output
//Student Name: Junaid
//Roll Number: 101
//Marks: 92.5
//Grade: A
//
//Student Name: Junaid
//Roll Number: 101
//Marks: 92.5
//Grade: A
//
//Student Name: Junaid
//Roll Number: 101
//Marks: 92.5
//Grade: A
//
//Student Name: Junaid
//Roll Number: 101
//Marks: 92.5
//Grade: A
//
//
//Special Challenge
//- Copy constructor mein const reference use karna hai.
//- Chaaron data members correctly copy hone chahiye.
//- student3 ko student2 se copy karna hai, student1 se nahi.
//- Koi ready-made solution nahi — code khud likhna hai.



#include <iostream>
using namespace std ;


class student{
	private :
		string name ;
	
		int  rollNumber ;
		double marks ;
		char Grade ;
		public:
			
			
		student(string n , int r , int m , char g ){
	 	name =n;
	 	 rollNumber = r;
	 	 marks = m;
	 	 Grade = g;
	 	 
	 }	;
	 
	 student(const student &s1){
	 	name =s1.name;
	 	 rollNumber = s1. rollNumber;
	 	 marks= s1.marks;
	 	 Grade= s1.Grade;
	 	 
	 }	;
	 
			void display(){
			cout<<"Student Name:  "<<name<<endl;
			cout<<"Student  rollNumber:  "<< rollNumber<<endl;
				cout<<"Student  :  "<<marks <<endl;
			cout<<"Student  :  "<<Grade <<endl;	
				
				
			}
	
	 
	
};




int main(){
	
	student s1("Ali" ,1 , 92.7, 'A');
	student s2(s1);
	
		student s3(s1);
	
	s1.display();
	s2.display();
	s3.display();
	return 0 ;
	
}
