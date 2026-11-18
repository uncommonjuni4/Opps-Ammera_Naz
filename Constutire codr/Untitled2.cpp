#include<iostream>
using namespace std ;


class Juni {
	
	public :
		string name ;
		
		
	Juni(){
		name = "Juni";
		
		cout<<"Set By Deafu;lt comnstriutor ";
		
	}
	
	Juni(string N){
		name  = N;
		
		cout<<"Set Juni by   parametrer ";
	}
	
	
	Juni (Juni &j1){
		name = j1.name;
		
		cout<<"Set nby copy";
	}
	
	friend void print(Juni &ji);
	 
};

void print(Juni &ji){
	 cout<<endl<<"Name : "<<ji.name<<endl;
}


int main(){
	
	
	Juni j1;
	
	Juni j2("juni");
	
	Juni j3(j1);
	
	print(j1);
	return 0;
}
