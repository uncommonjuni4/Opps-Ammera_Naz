#include<iostream>
using namespace std ;

class Father{
	
	public :
		
		Father(){
			cout<<"Father COnstroutir Called"<<endl;
			
		}
		
		~Father(){
			cout<<"Ftaher Deconstutor called"<<endl;
			
		}
		
};

class Child : public Father{
	public :
		
		Child(){
			cout<<"Child Construtor called "<<endl;
			
		}
		
		~Child(){
			cout<<"Child Deconstrutor called "<<endl;
		}
};

int main(){
	
	Child s1;
	

	
	return 0;
}
