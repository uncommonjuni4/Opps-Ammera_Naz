#include <iostream>
#include <string>
using namespace std;

class Father {
public:
    Father(string name) {
        cout << "Father Constructor Called with " << name << endl;
    }

    ~Father() {
        cout << "Father Destructor called" << endl;
    }
};

class Child : public Father {
public:
    // Accept 'name' in Child and pass it to Father
    Child(string name) : Father(name) {
        cout << "Child Constructor called " << endl;
    }

    ~Child() {
        cout << "Child Destructor called" << endl;
    }
};

int main() {
    Child s1("Hi");
    return 0;
}

