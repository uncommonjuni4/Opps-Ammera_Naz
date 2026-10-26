#include<iostream>
using namespace std;

// Forward declarations
void Withdrwa(int &blance);
void deposit(int &blance);
void showBlance(int blance);

class BankAccount {
private:
    int accountnumber = 1223333333;
    string customerName = "Muhammad Junaid Hassan";
    int blance = 4000;

public:
    void UserAccountControl();
};


void BankAccount::UserAccountControl() {
    cout << " ====================== Which You want to Do ==============" << endl;
    cout << "1----Widthraw Money------------" << endl;
    cout << "2----Deposit money------------" << endl;
    cout << "3----current balance------------" << endl;
    
    int userChoice;
    cout << "-----------------------Plz Select From Given Option LIke 1 , 2 or 3 --------------------" << endl;
    cin >> userChoice;
    cout << "Option Selected = " << userChoice << endl;
    
    if (userChoice == 1) {
        Withdrwa(blance);
    } 
    else if (userChoice == 2) {
        deposit(blance);
    } 
    else if (userChoice == 3) {
        showBlance( blance);
    }
} // <-- Added missing closing brace for the function

int main() {
    BankAccount user1;
    user1.UserAccountControl();
    
    return 0;
}

void Withdrwa(int &blance) {
    cout << "-------------Welcome to WithDraw Box ------" << endl;
    
     cout<<"Your  Curent Blance  =  "<<blance<<endl;
     
     cout<<"How much Amount You want to WithDraw ";
      int WithdrawAmount ;
      
      cin>> WithdrawAmount;
      
      cout<<" WithdrawAmount = "<< WithdrawAmount<<endl;
      
      if( WithdrawAmount > blance ){
      	  cout<<"You cannot Withdrwa Becuase You have  Low Blance "<<endl;
	  }else{
	  	cout<<"Witrhdraw SuessFully Done "<<endl;
	  	blance = blance -  WithdrawAmount;
	  	cout<<"Your Remaining Blance  = "<<blance<<endl;
	  }
    
}


///for deposit money 
void deposit(int &blance) {
    cout << "-------------Welcome to Depoist Box ------" << endl;
    cout<<"Your  Curent Blance  =  "<<blance<<endl;
    
    cout<<"Plz Enter How much Amount You Depost  to YOur Account ------";
    int depoistAmount ;
    cin>> depoistAmount;
    cout<<"Depoist Amount  = "<<depoistAmount<<endl;
    blance  += depoistAmount;
    cout<<"Now Your New  Curent Blance  =  "<<blance<<endl;
    
}


//for showblace
void showBlance(int blance) {
    cout << "-------- -----Welcome to Show Blance Box ------" << endl;
    
    cout<<"Your  Curent Blance  =  "<<blance<<endl;
    
}

