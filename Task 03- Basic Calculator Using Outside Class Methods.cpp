//Task 02: Basic Calculator Using Outside Class Methods


#include<iostream>
using namespace std ;




class Calculator{
	
	public :
	void add();
	void multi();
	
};



void  Calculator :: add (){
	
   cout<<"Sum   = "<<20+12<<endl;
	
};

void Calculator  :: multi(){
	
   cout<<"Multi   = "<<20*12<<endl;
	
};









int main(){
	
	
	Calculator  Cal;
	
	
    Cal.add();
	
	Cal.multi();
	
	
	
	
	
	return 0 ;
};