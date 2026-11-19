//Practical Task 1
//Ek Father class banao:
//- Public variable: age = 50
//- Protected variable: money = 100000
//- Private variable: house = 2
//Ek Son class banao jo Father ko public inherit kare.
//
//Requirements:
//1. Son ke function mein age print karo.
//2. Son ke function mein money print karo.
//3. house ko directly access karne ki koshish mat karna.
//4. Main function se Son ka object bana kar function call karo.

#include<iostream>
using namespace std ;

  
  class Father{
  	public :
  		
  		int age = 50;
  		
  		
  		protected :
  			
  			int money = 10000;
  			
  		private :
		  
		  int house = 2;
		  
		  
		public :
			
			void showHouse(){
				cout<<"House : "<<house<<endl;
			}
		  	
  };
  
  class Son : public Father{
  	
  	
  	public:
  	
  	  void show (){
  	  	cout<<"AGe : "<<age<<endl;
  	  	cout<<"Money : "<<money<<endl;
  	  	showHouse();
		}
  	
  	
  };

int main(){
	
	Son s1;
	
	s1.show();
	
	
	
	
	
	return 0;
}
