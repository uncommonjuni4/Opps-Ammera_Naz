//Task 01 — Student Marks System
//Beginner
//10 Marks
//
//Scenario
//Ek Student class banao jisme student ke marks dynamic memory mein store hon aur ek object se doosra object copy ho.
//Requirements
//1. Student class banao.
//
//2. Private data member:
//
//- int* marks
//
//3. Parameterized constructor:
//- new use karke dynamic memory allocate karo.
//- Marks ki value initialize karo.
//4. Copy constructor:
//- const reference use karo.
//- Pointer ka address copy karo.
//- Nayi memory allocate nahi karni.
//5. Display function:
//- Marks display karo.
//- Pointer ka memory address bhi display karo.
//Main function
//1. s1 object banao, marks 85 rakho.
//2. s2 ko s1 se copy karo.
//3. Dono objects ka data display karo.
//Expected Output
//Student 1 Marks: 85
//Student 2 Marks: 85
//
//Student 1 Address: Same Address
//Student 2 Address: Same Address
//
//
//Important rules
//- new use karna hai.
//- Shallow Copy khud implement karni hai.
//- Destructor abhi nahi banana.
//- Dono objects ke pointer addresses same hone chahiye.
//- s1 aur s2 ke addresses compare bhi kar sakte ho.

#include<iostream>
using namespace std ;


class student{
	private :
		int *marks ;
	
	
	public:
		
		student(int m ){
			marks = new int (m);
			
		}
		
		
		student(const student &s1){
			marks =s1.marks;
		}
		
		
		
		
		void display(){
			cout<<"Student  Marks:"<<*marks<<endl;
			cout<<"Student  Address:"<<marks<<endl;
			
		}
		
		~student(){
			delete marks;
		}
		
		
};






int main(){
	student s1(85);
	
	
	student     s2(s1);
	
	
	s1.display();
	s2.display();
	
	return 0 ;
	
}
