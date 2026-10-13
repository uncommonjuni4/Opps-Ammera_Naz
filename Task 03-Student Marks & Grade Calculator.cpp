//Task 03: Student Marks & Grade Calculator

#include<iostream>
using namespace std; 




class Result{
	
	public:
		
		int opps= 85;
		int coal = 90;
		int calculus= 89;
		
		
		void Grade();
		
};















int main(){
	
	
	Result Marks;
	
	Marks.Grade();
	
	
	return 0 ;
	
}

void Result :: Grade(){
	
	int total = opps+coal +calculus;
	cout<<"Total = "<<total<<endl ;
	
	int avg = total /3;
	cout<<"Avg   = "<<avg<<endl;
	
	if(avg >90 ||avg <=100){
		
		cout<<"Grade  = A+"<<endl;
		
	}else if(avg >80 ||avg <=90){
		
		cout<<"Grade  = B+"<<endl;
		
	}
	
}

