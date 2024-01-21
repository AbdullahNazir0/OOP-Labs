#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
    double circleRadius;

public:
    void setCircleRadius(double r);
    double getCircleRadius()const;
    double calculateCircleArea();
    double calculateCirclePerimeter();

};


#endif