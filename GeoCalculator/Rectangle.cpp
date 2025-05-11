#include <iostream>
#include "Rectangle.hpp"

using namespace std;

void Rectangle::getInput() {
    cout << "Enter width and height of the rectangle: ";
    cin >> width >> height;
}

double Rectangle::calculateArea() {
    return width * height;
}

void Rectangle::display() {
    cout << "Area of the rectangle = " << calculateArea() << endl;
}
