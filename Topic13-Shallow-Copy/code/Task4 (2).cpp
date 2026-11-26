

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
   	
   	  price = s1.price;
   	  
   	
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
