#include "Triangle.h"

void Triangle::setTriangleBase(double b)
{
    triangleBase = b;
}
void Triangle::setTriangleHeight(double h)
{
    triangleHeight = h;
}
void Triangle::setTriangleHypotenuse(double h)
{
    triangleHypotenuse = h;
}
double Triangle::setTriangleBase() const
{
    return triangleBase;
}
double Triangle::setTriangleHeight() const
{
    return triangleHeight;
}
double Triangle::setTriangleHypotenuse() const
{
    return triangleHypotenuse;
}
double Triangle::calculateTriangleArea()
{
    return((1 / 2) * triangleBase * triangleHeight);
}
double Triangle::calculateTrianglePerimeter()
{
    return (triangleBase + triangleHeight + triangleHypotenuse);
}