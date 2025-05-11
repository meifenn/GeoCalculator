#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
private:
    double width, height;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

#endif
