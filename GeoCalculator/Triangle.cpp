#include <iostream>
#include "Shape.hpp"

using namespace std;

void Triangle::getInput() {
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
}

double Triangle::calculateArea() {
    return 0.5 * base * height;
}

void Triangle::display() {
    cout << "Area of the triangle = " << calculateArea() << endl;
}