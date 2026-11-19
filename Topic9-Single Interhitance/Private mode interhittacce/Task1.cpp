//Task 2:
//1. Father class banao.
//2. Public variable age = 50 rakho.
//3. Protected variable money = 100000 rakho.
//4. Son class ko private inheritance do.
//5. Son ke function mein dono variables print karo.
//6. Main function mein s1.age ko directly access karne ki koshish mat karna.
#include<iostream>
using namespace std ;

  
  class Father{
  	public :
  		
  		int age = 50;
  		
  		
  		protected :
  			
  			int money = 10000;
  			
  	
	
		  	
  };
  
  class Son : private  Father{
  	
  	
  	public:
  	
  	  void show (){
  	  	cout<<"AGe : "<<age<<endl;
  	  	cout<<"Money : "<<money<<endl;
  	  
		}
  	
  	
  };

int main(){
	
	Son s1;
	
	s1.show();
	
	
	
	
	
	
	return 0;
}
