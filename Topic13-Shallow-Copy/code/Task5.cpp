//ask 05 — Final Challenge: Library Book Management System
//Advanced
//10 Marks
//
//Scenario
//Ek Library Book System banao jahan book ki price dynamic memory mein store ho. Ek book ko copy karke multiple objects banao aur check karo ke sab objects same memory share kar rahe hain.
//1. Class Requirements
//Class name: Book
//
//Private data member:
//
//- double* price
//2. Constructors
//Parameterized Constructor
//- new use karke dynamic memory allocate karo.
//- Book ki price initialize karo.
//Copy Constructor
//- const reference use karo.
//- Pointer ka address copy karo.
//- Nayi memory allocate nahi karni.
//3. Member Functions
//- display(string name) — book name, price aur memory address show kare.
//- updatePrice(double amount) — price update kare.
//- addPrice(double amount) — existing price mein amount add kare.
//4. Main Function Requirements
//1. book1 banao, price 1500.50 rakho.
//2. book2 ko book1 se copy karo.
//3. book3 ko book2 se copy karo.
//4. Teeno books ki information display karo.
//5. book2 ke through price 2000.50 set karo.
//6. Teeno books ki updated price display karo.
//7. book3 ke through 500 add karo.
//8. Dobara teeno books ki price display karo.
//9. Teeno memory addresses compare karo.
//5. Expected Output
//Initial Price:
//
//Book 1: 1500.50
//Book 2: 1500.50
//Book 3: 1500.50
//
//After Update:
//
//Book 1: 2000.50
//Book 2: 2000.50
//Book 3: 2000.50
//
//After Adding Price:
//
//Book 1: 2500.50
//Book 2: 2500.50
//Book 3: 2500.50















#include<iostream>
using namespace std;

class Book{
	private :
		double *price;

   public :
   	
   		Book(double p){
    	price = new double(p);
    	
    	
	}
	
	
    Book(const  Book &s1){
        price =s1.price;
		    
	}
	
	void update(double  up){
		*price = up;
		
	}
	
	void addPrice(double add){
		*price += add;
	}
	
	
	void  display(string name ){
		cout<<name <<*price<<endl;
		
	}
	
	
	void address (string n){
			cout<<n <<price<<endl;
	}
    
	
	~Book(){
		delete price ;
	}

	
};


int main(){
	
	
	Book s1(1500.50);
	Book  s2(s1);
    Book  s3(s2);
    
	cout<<"Initial Price:"<<endl;
	
	 s1.display("Book 1 :");
	 s2.display("Book 2 :");
	 s3.display("Book 3 :");
	 
	 
	cout<<"After Update:"<<endl;
	
	s2.update(2000.50);
	
	 s1.display("Book 1 :");
	 s2.display("Book 2 :");
	 s3.display("Book 3 :");
	
	
	
	cout<<"After adding  Price :"<<endl;
	s3.addPrice(500);
	
	 s1.display("Book 1 :");
	 s2.display("Book 2 :");
	 s3.display("Book 3 :");
	
cout<<"Address of all Data :"<<endl;
s1.address("Book 1 :");
s2.address("Book 2:");
s3.address("Book 3 :");
		
	return  0 ;
	
}
