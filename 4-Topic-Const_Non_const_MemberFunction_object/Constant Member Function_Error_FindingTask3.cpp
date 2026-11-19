//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    int marks = 75;
//
//public:
//    void display() const {
//        cout << "Marks: " << marks << endl;
//        marks = 90;   ////  here   are  error    beacuse in    const    function  we cnannot upadate  any value taht  whye error  come   
//    }
//};
//
//int main() {
//    const Student s1;
//    s1.display();
//
//    return 0;
//}



//correct 

#include <iostream>
using namespace std;

class Student {
private:
    int marks = 75;

public:
    void display() const {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    const Student s1;
    s1.display();

    return 0;
}

