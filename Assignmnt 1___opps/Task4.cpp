//Question 4: Electricity Bill Calculation (5 Marks)
//Understand: An electricity company wants to calculate a customer's electricity bill. The bill depends on the customer's name, consumer number, and units consumed. These details must remain private, but the company wants to use a separate friend function to calculate and display the bill.
//Billing Rules:
//First 100 units: Rs. 10 per unit
//Next 100 units: Rs. 15 per unit
//Units above 200: Rs. 20 per unit
//Tasks:
//"	Create a class named ElectricityBill with private data members for customer name, consumer number, and units consumed.
//"	Create a public member function to input the customer's information.
//"	Declare a non-member function named calculateBill() as a friend of the class.
//"	Implement calculateBill() to access the private data and calculate the bill according to the given rates.
//"	Display the customer's details, units consumed, and total bill.
//"	In main(), create an object and call the required functions.
//"	Example calculation: If a customer consumes 250 units:
//"	First 100 units: 100 × 10 = Rs. 1,000
//"	Next 100 units: 100 × 15 = Rs. 1,500
//"	Remaining 50 units: 50 × 20 = Rs. 1,000
//"	Total bill = Rs. 3,500
//Important note: The calculateBill() function must be a friend function, not a member function of the class.


#include<iostream>
using   namespace std ;


////ElectricityBill  class

class ElectricityBill{
	
	
	private :
		string customerName ;
		string  consumerNumber ;
		int consumedUnits ;
		
    	int totalbill ;
    	
    	int unitPrice ;
		
	public :
		
		//for inour user data 
		void  customerinformation();
		
		
		
		 friend void calculateBill(ElectricityBill user1);

	
};

 	void  ElectricityBill::customerinformation(){
 		
 		cout<<"Plz Enter Your Name : ";
 		getline(cin , customerName);
 		
 	
 		
 		
 		cout<<"Plz Enter Your consumerNumber : ";
 		getline(cin , consumerNumber);
 		
 	
 			
 		cout<<"Plz Enter Your consumer  Units : ";
 		 cin>>consumedUnits;
 		
 		
	 }
	 
	 
void calculateBill(ElectricityBill user1) {
	
		cout<<"Customer Name  : "<<user1.customerName<<endl;
		
			cout<<"Consumer Number  : "<<user1.consumerNumber<<endl;
 		
      cout<<"consumed Units  : "<<user1.consumedUnits<<endl;
      
      
      if(user1.consumedUnits >= 0 && user1.consumedUnits <=100){
      	 
      	cout<<"---------You consumedUnits "<<user1.consumedUnits<<" Thats why   your unit cost   go to 10 rupes per unit (1-100 units) -----"<<endl;
      	
      	user1.unitPrice = 10;
      	user1.totalbill = user1.consumedUnits * user1.unitPrice ;
      	
      	
      	cout<<"Total bill   = "<<user1.totalbill<<endl;
	  }else if(user1.consumedUnits >= 101 && user1.consumedUnits <=200){
      	 
      	cout<<"---------You consumedUnits "<<user1.consumedUnits<<" Thats why   your unit cost   go to 15 rupes per unit (101-200 units) -----"<<endl;
      	
      	user1.unitPrice = 15;
      	user1.totalbill = user1.consumedUnits * user1.unitPrice ;
      	
      	
      	cout<<"Total bill   = "<<user1.totalbill<<endl;
	  }else if(user1.consumedUnits >= 201 && user1.consumedUnits <=250){
      	 
      	cout<<"---------You consumedUnits "<<user1.consumedUnits<<" Thats why   your unit cost   go to 20 rupes per unit (201-250 units) -----"<<endl;
      	
      	user1.unitPrice = 20;
      	user1.totalbill = user1.consumedUnits * user1.unitPrice ;
      	
      	
      	cout<<"Total bill   = "<<user1.totalbill<<endl;
	  }else {
	  		cout<<"---------You consumedUnits "<<user1.consumedUnits<<" Thats why   your unit cost   go to 49 rupes per unit (250 units) -----"<<endl;
      	
      	user1.unitPrice = 3E0;
      	user1.totalbill = user1.consumedUnits * user1.unitPrice ;
      	
      	
      	cout<<"Total bill   = "<<user1.totalbill<<endl;
	  }
}







int main (){
	
	ElectricityBill  user1;
	user1.customerinformation();
    calculateBill( user1);
    
	return 0 ;
}
