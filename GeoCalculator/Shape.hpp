#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual void getInput() = 0;
    virtual double calculateArea() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

class Triangle : public Shape {
private:
    double base, height;
public:
    void getInput() override;
    double calculateArea() override;
    void display() override;
};

#endif
