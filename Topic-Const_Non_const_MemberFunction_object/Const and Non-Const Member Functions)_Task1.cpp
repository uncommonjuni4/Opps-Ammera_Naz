//Task 09: Product Price Getter and Setter
//Medium
//Topic: Const and Non-Const Member Functions
//
//Create a class Product with:
//1. Private attribute double price = 99.5;
//2. Public method getPrice() const jo price display kare.
//3. Public method setPrice(double p) jo price update kare.
//4. Dono methods class ke bahar :: se define karo.
//5. main() mein normal object banao, price 150.5 set karo, phir display karo.
//Expected Output:
//Product Price: 150.5
//
//
//Challenge: getPrice() ko const banana hai, lekin setPrice() ko const nahi banana, kyunki woh data update karta hai.



#include<iostream>
using namespace std ;

class  Product {
	private :
	
		double price = 99.5;
		
	public :
	void getPrice() const ;
	void setPrice(double p);
	
};


void Product::getPrice() const {
	     cout<<"Product Price: "<<price;
	};

void Product::setPrice(double p){
	      price = p ;
	};

	
	
	




int main(){
	
	
    Product Obj1;
	Obj1.setPrice(150.5);
	Obj1.getPrice();
	
	
	
	return 0 ;
}
