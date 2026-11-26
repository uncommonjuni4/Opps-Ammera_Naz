//Task 01 — Student Marks System
//Beginner
//10 Marks
//
//Scenario
//Ek Student class banao jisme marks dynamic memory mein store hon. Ek student ka object copy karke doosra object banao, lekin dono ki memory separate honi chahiye.
//Requirements
//1. Student class banao.
//
//2. Private data member:
//
//- int* marks
//
//3. Parameterized constructor:
//- new use karke dynamic memory allocate karo.
//- Marks initialize karo.
//4. Copy constructor:
//- const reference use karo.
//- New memory allocate karo.
//- Existing object ki value new memory mein copy karo.
//5. Functions:
//- display(string name) — marks aur memory address show kare.
//- updateMarks(int value) — marks update kare.
//Main function mein
//1. s1 object banao, marks 85 rakho.
//2. s2 ko s1 se Deep Copy karo.
//3. Dono objects ka data display karo.
//4. s2 ke marks 90 karo.
//5. Dobara dono objects ka data display karo.
//6. Dono memory addresses compare karo.
//Expected Output
//Before Update:
//
//Student 1 Marks: 85
//Student 2 Marks: 85
//
//After Update:
//
//Student 1 Marks: 85
//Student 2 Marks: 90
//
//
//Different Memory Addresses
//Important Rules
//- int* use karna hai.
//- Copy constructor mein new use karna hai.
//- const reference compulsory hai.
//- Destructor bhi implement karna hai.
//- Dono objects ki memory separate honi chahiye.
//- s2 update karne se s1 change nahi hona chahiye.


#include<iostream>
using namespace std ;

class student{
	private :
	 
	 int *marks;
	 
	public :
	
	student(int m){
		marks= new int(m);
		
	}
	
	student(const student &s1){
		marks = new int(*s1.marks);
		
	
	
	}
	
	
	void update(int up){
		*marks =up;
	}	
	
	void display(string n){
		cout<<n<<*marks<<endl;
	}
	
	
	~student(){
		delete marks;
	}
	
	
		
		
};




int main(){
	student s1(85);
	
	student  s2(s1);
	
	s1.display("Student 1 Marks: ");
	s2.display("Student 2 Marks: ");
	
	cout<<"After Update:"<<endl;
	
	
	s2.update(90);	
	
		
	s1.display("Student 1 Marks: ");
	s2.display("Student 2 Marks: ");

	return 0 ;
}
