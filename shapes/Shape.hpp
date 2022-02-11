#pragma once

enum class Color : unsigned char {
    Red, Blue, Gray, Green
};

class Shape {
public:
    Shape() = default;
    Shape(Color c) : color_{c} {}
    Shape(const Shape& shape) : color_{shape.color_} {}
    
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;

private:
    Color color_ = Color::Red;
};
