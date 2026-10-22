//Task 12: Student Result Using Friend Function
//Medium
//Topic: Friend Function + Multiple Private Attributes + Calculation
//
//Create a class named StudentResult.
//
//Requirements:
//1. Create three private attributes:
//   - oop = 85
//   - math = 90
//   - english = 80
//2. Declare a friend function calculateResult(StudentResult s);.
//3. Define the friend function outside the class without ::.
//4. Calculate total marks out of 300.
//5. Calculate percentage using total * 100.0 / 300.
//6. Display grade using these rules:
//Percentage	Grade
//80% or above	A
//70%–79.99%	B
//60%–69.99%	C
//Below 60%	F
//7. Create an object in main() and call the friend function.
//
//Expected Output:
//===== Student Result =====
//Total Marks: 255 / 300
//Percentage: 85%




#include<iostream>
using namespace std ;

class  StudentResult{
	private :
	 int opp = 85;
	 int eng = 80;
	 int math = 90 ;
	 
	 
	 friend  void calculateResult(StudentResult &s);
	 

	
};


void  calculateResult(StudentResult &s){
	
	int total = 300;
	int obtainMarks = s.opp+s.eng+s.math ;
    float percentage = obtainMarks * 100.0 / total;
	
	
	cout<<"===== Student Result ====="<<endl;
	cout<<"Total Marks: "<< obtainMarks<<"/"<<total<<endl;
	cout<<"Percentage: "<<percentage<<"%"<<endl;
	if(percentage >=80 &&  percentage <=100){
		cout<<"Grade:  A"<<endl;
	}else if(percentage >=70 &&  percentage <=80){
		cout<<"Grade:  B"<<endl;
	}else if(percentage >=60 &&  percentage <=70){
		cout<<"Grade: C"<<endl;
	}else if(percentage >=0 &&  percentage <=60){
		cout<<"Grade: Fail"<<endl;
	}
	
};







int main(){
	StudentResult s;
	
    calculateResult(s);
	
	
	return 0 ;
}
