#include<iostream>
using namespace std ;


class Book {
public :
   string  title ;
   string autor ;
   int year ;

};





int main(){
	
	
	Book obj1;
	obj1.title="Matilda";
	obj1.autor = "Roald Dahl";
	obj1.year =     1988;
	
	
	
	Book obj2;
	obj2.title="The Giving Tree";
	obj2.autor = " Shel Silverstein";
	obj2.year =     1964;
	
	cout<<obj1.title<<" , "<<obj1.autor<<" , "<<obj1.year<<endl;
	cout<<obj2.title<<" , "<<obj2.autor<<" , "<<obj2.year<<endl;
	return 0 ;
}




//Then create two objects of the class and print their attribute values.
//
//Expected Output
//Matilda, Roald Dahl, 1988
//The Giving Tree, Shel Silverstein, 1964