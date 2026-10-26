//Question 1: University Management (5 Marks)
//
//Understand: A university wants to develop a simple system to store and display students' academic information. Each student has a name, roll number, and marks obtained in three subjects.
//Tasks:
//"	Create a class named Student with appropriate data members.
//"	Define a member function to input the student's information and marks.
//"	Define another member function to calculate the total marks and average marks.
//"	Create a member function to display the student's complete information and calculated result.
//"	In the min() function, create an object of the class, input the data, and display the result.


#include<iostream>
using namespace std;

   
//////class for students 
   class Students{
    
	////some personal data  must be  private 
	private :
	string  name ; 
	int  rollNumber ;
	float subj1Marks;
	float subj2Marks;
    float subj3Marks;
	int  totalsubMarks ;
	float avg;
	float  totalobtain;
	
	public:
		
		/////for get  student information 
		void GetStudentInfo();
		
		/////for  claculate     students Reuslt 
   	    void CalculateResult();
   	    
   	    
   	    ////for show all Data of student 
   	    void Display();
   	    
   	    
   };
   
   
   /// get student personal information
   
   void   Students :: GetStudentInfo(){
   	
   	     ////inputs   student data
   	     
   	      cout<<"================   Plz Enter Your Name  =================="<<endl;
   	      getline(cin , name);
   	     
   	     
   	     cout<<"================   Plz Enter Your Roll Number  =================="<<endl;
   	       cin>>rollNumber;
   	       
   	       
   	       
   	       cout<<"================   Plz Enter Your Marks of Subject 1   =================="<<endl;
   	       cin>>subj1Marks;
   	       
   	        
   	       cout<<"================   Plz Enter Your Marks of Subject 2   =================="<<endl;
   	       cin>>subj2Marks;
   	      
   	        
   	       cout<<"================   Plz Enter Your Marks of Subject 3   =================="<<endl;
   	       cin>>subj3Marks;
   	       
   }

   /////for  claculate     students Reuslt 
   void  Students ::  CalculateResult(){
   	totalsubMarks = 300 ;
   	      
   	       totalobtain = subj1Marks+ subj2Marks+ subj3Marks;
   	     
   	      
   	      // for average marks 
   	      
   	        avg=  totalobtain / 3 ;
   	        
   }
  
    ////for show all Data of student 
   	    void Students ::  Display(){
   	    	
   	    	
   	     cout<<"Student Name : "<<name<<endl;
   	    
   	     cout<<"Student Roll Number : "<<rollNumber<<endl;
   	     
   	     cout<<"Marks of Subject 1 : "<<subj1Marks<<endl;
   	     
   	     cout<<"Marks of Subject 2 : "<<subj2Marks<<endl;
   	      
   	     cout<<"Marks of Subject 3 : "<<subj3Marks<<endl;
			
	      cout<<"TotalMarks Of all Subjects  = "<<totalsubMarks<<endl;
	      
	      cout<<"total Obtain Marks  = "<<totalobtain<<endl;
	        
	      cout<<"Average of Stutent Obtain Marks = "<<avg<<endl; 
   	    	  
		   }
  

int main(){
	/////create object for student class
      Students s1;
	s1.GetStudentInfo();
	s1.CalculateResult();
	s1.Display();
	
	return 0;
}
