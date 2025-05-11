#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
private:
    double radius;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

#endif
