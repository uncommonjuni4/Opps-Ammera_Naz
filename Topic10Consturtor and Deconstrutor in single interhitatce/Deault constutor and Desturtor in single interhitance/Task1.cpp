#include<iostream>
using namespace std ;

class Father{
	
	public :
		
		Father(string name = "Default"){
			cout<<"Father COnstroutir Called with "<<name<<endl;
			
		}
		
		~Father(){
			cout<<"Ftaher Deconstutor called"<<endl;
			
		}
		
};

class Child : public Father{
	public :
		
		Child():Father("Default"){
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
