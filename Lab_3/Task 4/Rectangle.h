#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
    double rectangleLength;
    double rectangleWidth;
    
public:
    void setRectangleLength(double l);
    void setRectangleWidth(double w);
    double getRectangleLength()const;
    double getRectangleWidth()const;
    double calculateRectangleArea();
    double calculateRectanglePerimeter();

};

#endif