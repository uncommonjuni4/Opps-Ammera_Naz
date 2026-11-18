//Question 3: Product Information System (5 Marks)
//Understand: A shopping application stores the information of products, including product ID, product name, and price. The application needs to display product information without modifying the stored data.
//Tasks:
//"	Create a class named Product with appropriate data members.
//"	Create a member function to initialize product information.
//"	Create a constant member function named displayProduct() to display the product details.
//"	Create an object of the class and call the constant member function to display the information.
//"	Explain through your code why displayProduct() is declared as a constant member function.



#include<iostream>
using namespace std ;


/////create class of ProducInformation

class ProducInformation{
	
	public : 
	 
	 string productId ;
	 string productname;
	 int price ; 
	 
	 void setProductInfo();
	 
	 void  displayProduct() const ;
};




 void   ProducInformation:: setProductInfo(){
 	
 	 cout<<"Plz Enter Product Name ";
 	 getline(cin ,productname);
 	 
 	 
 	 
 	 cout<<"Plz Enter Product Id ";
 	 getline(cin , productId);
 	 
 	 
 	 
 	 cout<<"Plz Enter Product Price  ";
 	 cin>> price;
 	 
 	 
 }



 	 void  ProducInformation:: displayProduct() const {
	  
	    cout<<"Product Name : "<<productname<<endl;
	    
	    cout<<"Product Id  : "<<productId<<endl;
	    
	    cout<<"Product price  : "<<price ;
	  
	  }

int  main(){
	ProducInformation p1;
	 p1.setProductInfo();
	 p1.displayProduct();
	return 0  ;
}
