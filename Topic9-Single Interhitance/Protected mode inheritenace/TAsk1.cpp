//Practical Task 3 — Protected Inheritance (Correction)
//Question Statement:
//
//Create a C++ program using Protected Inheritance.
//
//Requirements:
//1. Create a class named Father.
//2. Declare a public variable age = 50.
//3. Declare a protected variable money = 100000.
//4. Declare a private variable house = 2.
//5. Create a class named Son that inherits Father using protected inheritance.
//6. Create a show() function inside the Son class.
//7. Print age and money inside the show() function.
//8. Do not access house directly inside the Son class.
//9. In the main() function, create an object of Son and call the show() function.
//Expected Output:
//Age: 50
//Money: 100000


#include<iostream>
using namespace std ;



class Father {
	public :
		
		int age = 50;
		
	protected :
		
		int  money = 100000;
		
	private :
		int  house =2;
};



class Son : protected Father {
	
	public: 
	
	void show(){
	  cout<<"Age : "<<age<<endl;
	  cout<<"money : "<< money<<endl;

	}
};






int main(){
	
	Son s1;
	
	
	s1.show();
	return 0 ;
}
