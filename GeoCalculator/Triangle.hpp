#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
private:
    double base, height;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

#endif
