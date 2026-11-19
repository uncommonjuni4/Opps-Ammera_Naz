//Task 03 — Student Object Lifecycle
//10 Marks
// Beginner Level
//
//
//Requirements:
//1. Student naam ki class banao.
//2. Ek private variable name banao.
//3. Parameterized constructor banao jo name receive kare.
//4. Constructor mein print karo: "Constructor Called"
//5. Destructor banao.
//6. Destructor mein print karo: "Destructor Called"
//7. display() function banao jo student ka name print kare.
//8. main() mein do Student objects banao aur unka display() call karo.
//Expected Output:
//Constructor Called
//Constructor Called
//
//Student Name: Ali
//Student Name: Ahmed
//
//Destructor Called
//Destructor Called


#include<iostream>
using namespace std ;

class Student{
	private :
		string name ;
	
	public:
	
	Student (string Name){
	  cout<<"Constructor Called"<<endl;
	  name = Name;
	  	
};


   void  display() {
	cout<<"Student Name:"<<name<<endl;
	
}


  ~Student(){
   
     cout<<"Destructor Called"<<endl;
  
  }


int main(){
	Student s1("Ali");
	Student s2("Ahmed");
	
	s1.display();
	
	s2.display()
	
	return 0 ;
}
