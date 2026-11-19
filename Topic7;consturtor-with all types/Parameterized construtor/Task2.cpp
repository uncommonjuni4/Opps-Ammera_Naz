//Task 01 — Student Information
//10 Marks
// Beginner Level
//
//Question
//C++ mein Student naam ki class banao.
//
//Requirements:
//1. Class mein do private variables banao:
//   - name
//   - age
//2. Ek parameterized constructor banao jo name aur age receive kare.
//3. Constructor ki help se variables ko initialize karo.
//4. Ek display() function banao jo cout se student ka name aur age print kare.
//5. main() mein do Student objects banao, dono ko different values do.
//Expected Output
//Student 1
//Name: Ali
//Age: 20
//
//Student 2
//Name: Ahmed
//Age: 22


#include<iostream>
using namespace std ;

class Student{
	private :
		string name ;
		int age ;
	

	public:
			Student(string Name,int Age){
		name = Name ;
		age = Age;
		
	}
	
		void ShowI(int n){
			cout<<"Student "<<n<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl<<endl;
			
		}
};







int main(){
	
	Student s1("Ali", 20);
	Student s2("Ahmed", 22);
	
	
	s1.ShowI(1);
	
	s2.ShowI(2);
	
	
	return  0 ;
}
