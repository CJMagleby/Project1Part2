//
//  main.cpp
//  Shape
//
//  Created by CJ Magleby on 9/19/18.
//  Copyright © 2018 CJ Magleby. All rights reserved.
//

#include <iostream>

class Shape
{
protected:
    double x_width;
    double y_height;
public:
    Shape();
    Shape(double x, double y);
    virtual double area() = 0;
    double getWidth() { return x_width; }
    double getHeight() { return y_height; }
    void setWidth(double x) { x_width = x; }
    void setHeight(double y) { y_height = y; }
};
Shape::Shape(double x, double y)
{
    x_width = x;
    y_height = y;
}
Shape::Shape()
{
    x_width = 1;
    y_height = 1;
}


class rectangle : public Shape
{
public:
    rectangle(double x, double y);
    double area() { return x_width * y_height; }
};
rectangle::rectangle(double x, double y)
{
    x_width = x;
    y_height = y;
}

class triangle : public Shape
{
public:
    triangle(double x, double y);
    double area() { return (x_width * y_height) / 2; }
};
triangle::triangle(double x, double y)
{
    x_width = x;
    y_height = y;
}

int main()
{
    double rwidth = 10;
    double height = 20;
    rectangle recTest(rwidth, height);
    std::cout << "Rectangle Area: " << recTest.area() << std::endl;
    
    triangle triTest(rwidth, height);
    std::cout << "Triangle Area: " << triTest.area() << std::endl;
    
    
    system("Pause");
    return 0;
}
