#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
private:
    double triangleBase;
    double triangleHeight;
    double triangleHypotenuse;
    
public:
    void setTriangleBase(double b);
    void setTriangleHeight(double h);
    void setTriangleHypotenuse(double h);
    double setTriangleBase()const;
    double setTriangleHeight()const;
    double setTriangleHypotenuse()const;
    double calculateTriangleArea();
    double calculateTrianglePerimeter();

};

#endif