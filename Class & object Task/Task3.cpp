//
//Task 3 — Student Information System
//
//
//Scenario: Tumhein C++ mein ek student management program banana hai jo class aur object ke through student ki information display kare.
//Expected Output
//===== STUDENT INFORMATION =====
//Name: Ali
//Roll No: 101
//Marks: 85
//Grade: A
//
//
//Requirements
//1. Student naam ki class banao.
//2. Class mein 3 variables banao: name, rollNo, marks.
//3. setData() function banao jo student ka data set kare.
//4. displayData() function banao jo details print kare.
//5. main() mein s1 naam ka object banao.
//6. Object ke through functions call karo.
//7. Marks ke according grade display karo:
//   - 80 ya above ? A
//   - 60–79 ? B
//   - Below 60 ? C

#include<iostream>
using namespace std;

class Student {

public:
  
    int roll , marks;
    string name ;
    

    void setValue(int Roll, int Marks, string Name) {
        
        roll = Roll;
         marks = Marks;
         name = Name ;
         
    };
    
    

  

   
    void display() {
        cout << " ===== STUDENT INFORMATION ===== " << endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No: : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
        
        if(marks <=80 && marks >=81){
        	cout<<"Garde : A"<<endl;
		}else if(marks >=70 && marks <=80) {
			   cout<<"Garde : B"<<endl;
			   
		}else if (marks <=60){
			cout<<"Grade : C";
		}
    }
};

int main() {
  
   Student s1;
   s1.setValue(20 ,60 , "Junaid HAssam");
   s1.display();
   

    return 0;
}
