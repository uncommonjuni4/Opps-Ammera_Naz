//Copy Constructor — Task 03
//10 Marks
// Intermediate Beginner
//
//Book Information System
//Ab hum check karenge ke tum Copy Constructor ko multiple objects ke saath kitna achha use kar sakte ho.
//
//Requirements:
//1. Book class banao.
//2. Private variables:
//   - title
//   - author
//   - price
//3. Parameterized constructor banao.
//4. Copy constructor banao.
//5. display() function banao.
//Main function mein:
//- b1 banao: "C++ Programming", "Bjarne", 1500
//- b2 ko b1 se copy karo.
//- b3 ko bhi b1 se copy karo.
//- Teeno objects ka data display karo.
//Expected Output:
//Book Title: C++ Programming
//Author: Bjarne
//Price: 1500
//
//Book Title: C++ Programming
//Author: Bjarne
//Price: 1500
//
//Book Title: C++ Programming
//Author: Bjarne
//Price: 1500


#include <iostream>
using namespace std ;


class Book{
	private :
		string title ;
	
		string  author ;
		int price ;
		public:
			
			
	 Book(string t , string  a, int p ){
	 	title =t;
	 	 author= a;
	 	price = p;
	 }	;
	 
	Book(const  Book  &s1){
	 	
	 	title =s1.title;
	 	 author= s1. author;
	 	price= s1.price ;
	 }	;
	 

	 
			void display(){
			cout<<"Book title:  "<<title<<endl;
			
			cout<<"Book  author:  "<< author<<endl;
			cout<<"Book price :  "<<price<<endl;	
	}
	
	 
	
};




int main(){
    Book s1("C++ Programming", "Bjarne", 1500)	;
      
      Book  s2( s1);
      
      Book  s3 (s1);
       
       s1.display();
       s2.display();
       s3.display();

	return 0 ;
	
}
