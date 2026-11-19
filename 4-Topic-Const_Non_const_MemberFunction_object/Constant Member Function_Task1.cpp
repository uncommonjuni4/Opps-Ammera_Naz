//Task 06: Student Marks Using Constant Member Function
//Medium
// Topic: const Member Function
//
//Ab hum aapki PowerPoint ka next topic Constant Member Functions practice karenge.
//
//Question: Create a class Student with the following requirements:
//1. Create a private attribute marks = 85.
//2. Create a public method showMarks() const.
//3. Define showMarks() inside the class.
//4. Method ke andar marks display karo, lekin change mat karo.
//5. main() mein ek constant object create karo.
//6. Object se showMarks() call karo.
//Expected Output:
//Student Marks: 85



#include<iostream>
using namespace std ;

class  Student {
	private :
	 int marks = 85;
	 
	 public :
	  void showMarks() const {
	  
	  cout<<"Student Marks: "<<marks;
	  
	  }
	 
	 
};









int main(){
	
	const Student Obj1;
	Obj1.showMarks();
	
	return 0 ;
}
