//Practical Task 4 — All 3 Inheritance Modes
//Question Statement:
//
//Create a C++ program that demonstrates Public, Private, and Protected Inheritance.
//
//Requirements:
//1. Create a class named Father.
//2. Declare three variables:
//   - Public: age = 50
//   - Protected: money = 100000
//   - Private: house = 2
//3. Create three separate derived classes:
//   - PublicSon should publicly inherit Father.
//   - PrivateSon should privately inherit Father.
//   - ProtectedSon should protectedly inherit Father.
//4. Each derived class should have its own show() function.
//5. Print age and money inside each show() function.
//6. Do not access house directly inside any derived class.
//7. Create objects of all three derived classes in main().
//8. Call all three show() functions.
//Expected Output
//--- Public Inheritance ---
//Age: 50
//Money: 100000
//
//--- Private Inheritance ---
//Age: 50
//Money: 100000
//
//--- Protected Inheritance ---
//Age: 50
//Money: 100000




#include<iostream>
using namespace std ;

class Father {
	public :
		
		int age = 50;
    protected :
    	int money = 100000;
    	
    private :
    	
    	int house = 2;
    	
};

class PublicSon : public Father {
	public :
		void show(){
			cout<<"--- Public Inheritance ---"<<endl;
			
			cout<<"Age : "<<age<<endl;
			cout<<"Money : "<<money<<endl;
		}
};


class PrivateSon :private Father {
		public :
		void show(){
			cout<<"--- Private Inheritance ---"<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Money : "<<money<<endl;
		}
};


class ProtectedSon : protected Father {
		public :
		void show(){
			cout<<"--- Protected Inheritance ---"<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Money : "<<money<<endl;
		}
};



int main(){
	
	PublicSon s1;
	s1.show();
	

	
	PrivateSon s2;
	
	s2.show();
	
	
	ProtectedSon s3;
	
	s3.show();
	
	

	return 0 ;
}
