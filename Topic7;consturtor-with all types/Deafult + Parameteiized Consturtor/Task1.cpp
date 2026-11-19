//ask 02 — Employee Information
//10 Marks
// Beginner Level
//
//Question
//C++ mein Employee naam ki class banao.
//
//Requirements:
//1. Do private variables banao:
//   - name
//   - salary
//2. Parameterized constructor banao:
//   - name ki default value "Unknown" ho.
//   - salary ki default value 30000 ho.
//3. display() function banao jo name aur salary print kare.
//4. main() mein 3 objects banao:
//   - Object 1: Dono values pass karo — "Ali", 50000
//   - Object 2: Sirf name pass karo — "Ahmed"
//   - Object 3: Koi argument pass na karo.
//Expected Output
//Employee 1
//Name: Ali
//Salary: 50000
//
//Employee 2
//Name: Ahmed
//Salary: 30000
//
//Employee 3
//Name: Unknown
//Salary: 30000


#include<iostream>
using namespace std ;

class Employee{
	private :
		
		string name ;
		int salary ;
	

	public:
	   Employee(string Name = "unkown" ,int Salary =30000){
		name = Name ;
		salary = Salary ;
		
	}
	
		void  display(int n){
			cout<<"Employee "<<n<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<< salary<<endl<<endl;
			
		}
		
		
};







int main(){
	
 Employee	 s1("Ali", 20);
    Employee  s2("Ahmed", 22);
 Employee  s3;
	
	s1. display(1);
	
	s2. display(2);
	
	s3.display(3);
	
	return  0 ;
}
