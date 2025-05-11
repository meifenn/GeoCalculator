#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual void getInput() = 0;
    virtual double calculateArea() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

#endif
