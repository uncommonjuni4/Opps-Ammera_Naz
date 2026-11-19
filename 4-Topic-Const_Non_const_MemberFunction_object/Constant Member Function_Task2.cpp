//Task 07: Product Price Using Const Member Function
//Medium
//Topic: Const Member Function + Scope Resolution
//
//Create a class named Product with these requirements:
//1. Create a private attribute double price = 1500.50;.
//2. Declare a public method showPrice() const; inside the class.
//3. Define this method outside the class using ::.
//4. Display the product price without changing it.
//5. Create a constant object in main().
//6. Call the method using the object.
//Expected Output:
//Product Price: 1500.5



#include<iostream>
using namespace std ;

class  Product {
	private :
		float price = 1500.50;
		
	public :
	
	void showPrice() const ; 
	
};


void Product :: showPrice() const {

  cout <<"Product Price: "<<price;

}


int main(){
	
	Product Obj1;
	Obj1.showPrice();
	
	
	return 0 ;
}
