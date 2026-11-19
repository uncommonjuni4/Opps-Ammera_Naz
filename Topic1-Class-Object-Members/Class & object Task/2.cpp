//Task 2 — Constructor Practice
//Medium
// 10 Marks
//
//
//Ab hum Default Constructor aur Parameterized Constructor practice karenge.
//Scenario: Car Showroom System
//Car naam ki class banao jis mein 3 variables hon:
//- brand — string
//- model — string
//- price — int
//Requirements:
//1. Default constructor banao jo brand "Toyota", model "Corolla" aur price 5000000 set kare.
//2. Parameterized constructor banao jo arguments se values initialize kare.
//3. display() function banao jo car details show kare.
//4. main() mein c1 object default constructor se banao.
//5. c2 object parameterized constructor se banao, values "Honda", "Civic", 7500000.
//6. Dono objects ka data display karo.

//Expected Output
//===== CAR 1 =====
//Brand: Toyota
//Model: Corolla
//Price: 5000000
//
//===== CAR 2 =====
//Brand: Honda
//Brand: Honda
//Price: 7500000

#include<iostream>
using namespace std ;

class Car{
	
	public :
		string brand ,Model;
		int price ;
		
		
	Car(){
			brand ="Toyota";
			Model = "Corolla" ;
			price = 5000000;
			
	}
	
	Car(string Brand , string model , int Price ){
			brand =Brand ;
			Model =  model ;
			price = Price;
			
	}
	
	void display(int carNumber ){
		
		cout<<"===== CAR "<<carNumber<<"====="<<endl;
		cout<<"Brand: "<<brand<<endl;
		cout<<"Model : "<<Model<<endl;
		cout<<"Price : "<<price<<endl;
		
		
	}
};



int main(){
	Car car1 ;
	Car car2(" Honda" ," Civic" ,7500000 );
    car1.display(1);
    car2.display(2);
	return 0 ;
	
}
