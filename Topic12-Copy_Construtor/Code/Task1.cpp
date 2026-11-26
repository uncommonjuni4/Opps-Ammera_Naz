//Copy Constructor — Task 01
//10 Marks
// Beginner Level
//
//Student Information System
//Requirements:
//1. Student naam ki class banao.
//2. Do private variables banao:
//   - name (string)
//   - age (int)
//3. Parameterized constructor banao jo name aur age receive kare.
//4. Copy constructor banao jo ek existing object se values copy kare.
//5. display() function banao jo name aur age print kare.
//Main Function mein:
//- s1 object banao: "Ali", 20
//- s2 object banao: s1 ki copy se.
//- Dono objects ka display() call karo.
//Expected Output:
//Student Name: Ali
//Student Age: 20
//
//Student Name: Ali
//Student Age: 20

#include <iostream>
using namespace std ;


class student{
	private :
		string name ;
	
		int age ;
		public:
			
			
		student(string n , int a){
	 	name =n;
	 	age = a;
	 }	;
	 
	 student(const student &s1){
	 	name =s1.name;
	 	age = s1.age;
	 }	;
	 
			void display(){
			cout<<"Student Name:  "<<name<<endl;
			cout<<"Student Age:  "<<age<<endl;
				
			}
	
	 
	
};




int main(){
	
	student s1("Ali" ,20);
	student s2(s1);
	
	
	s1.display();
	s2.display();
	return 0 ;
	
}
