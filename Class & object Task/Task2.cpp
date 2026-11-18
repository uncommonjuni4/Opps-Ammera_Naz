//Task 2: Rectangle
//
//Create a class named Rectangle.
//
//Requirements:
//
//Declare length and width.
//
//Create a function to calculate area.
//
//Create another function to calculate perimeter.
//
//Create an object and display both result

	#include<iostream>
using namespace std;

class Rectangle {

public:

    int length, width;
    int area;

    void setValue(int Length, int Width) {
        length = Length;
        width = Width;
    }

    void calArea() {
        area = width * length;
    }

    void calPerimeter() {
        int perimeter = 2 * (length + width);
        cout << "Perimeter = " << perimeter << endl;
    }

    void display() {
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main() {

    Rectangle s1;

    s1.setValue(12, 12);

    s1.calArea();
    s1.display();
    s1.calPerimeter();

    return 0;
}
