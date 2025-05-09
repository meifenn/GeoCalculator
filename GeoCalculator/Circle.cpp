#include <iostream>
#include <cmath>
#include "Shape.hpp"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

void Circle::getInput() {
    cout << "Enter radius of the circle: ";
    cin >> radius;
}

double Circle::calculateArea() {
    return M_PI * radius * radius;
}

void Circle::display() {
    cout << "Area of the circle = " << calculateArea() << endl;
}
