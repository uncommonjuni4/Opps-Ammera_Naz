#include<iostream>
using namespace std ;



class Info{

	public:
	string name ="Muhammad Junaid Hassan";
	string Dpname = "Computer Science ";
	int   CurSem  = 3;
	
	
	
	void Detail(){
	   
	   cout<<"My name  is "<<name<<" And my   department is   "<<Dpname<<" And My  Current Sememter is  "<<CurSem<<endl;
	  
	 
	}
	
	
	
	
	
	
};





int main(){
	
	
   Info MyDetail;
   MyDetail.Detail();
	
	
	return 0 ;
}