//Task 03 — Product Price System
//Intermediate
//10 Marks
//
//Scenario
//Ek Product class banao jisme product ki price dynamic memory mein store ho. Ek product ko copy karke doosra product create karo aur shared memory ka behavior check karo.
//Requirements
//1. Product class banao.
//
//2. Private data member:
//
//- double* price
//
//3. Parameterized constructor:
//- new use karke dynamic memory allocate karo.
//- Product ki price initialize karo.
//4. Copy constructor:
//- const reference use karo.
//- Pointer ka address copy karo.
//- Nayi memory allocate nahi karni.
//5. Functions:
//- display(string name) — product name, price aur memory address show kare.
//- updatePrice(double amount) — price update kare.
//Main function mein
//1. p1 object banao, price 2500.50 rakho.
//2. p2 ko p1 se copy karo.
//3. Dono products ki information display karo.
//4. p2 ke through price 3000.75 update karo.
//5. Dobara dono products ki information display karo.
//6. Verify karo ke dono memory addresses same hain.
//Expected Output
//Before Update:
//
//Product 1 Price: 2500.5
//Product 2 Price: 2500.5
//
//After Update:
//
//Product 1 Price: 3000.75
//Product 2 Price: 3000.75


#include<iostream>
using  namespace  std ;


class Product {
	private :
		double *price;
	public :
	
		
	Product(int p){
		price = new double(p);
		
	}
	
   Product(const Product &s1){
   	
   	  *price = *s1.price;
   	  
   	
   }
	
	
	
	void display(string name){
		cout<<name <<" "<<*price<<endl;
	}
	
	
	void updateValue(double v ){
		*price = v;
		
	}
	
};









int main (){
	
	Product s1( 2500.5);
    Product s2(s1);
    
    
    cout<<"Before"<<endl;
    
    s1.display("Product 1 :");
    s2.display("Produ ct 2 :");
    
    
    //update value ]
    
    s2.updateValue(3000.75);
    cout<<"AQfter  "<<endl;
    
    
     
    s1.display("Product 1 :");
    s2.display("Produ ct 2 :");
	
	return  0 ;
}
