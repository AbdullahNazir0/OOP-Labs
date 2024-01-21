#include "Rectangle.h"

void Rectangle::setRectangleLength(double l)
{
    rectangleLength = l;
}
void Rectangle::setRectangleWidth(double w)
{
    rectangleWidth = w;
}
double Rectangle::getRectangleLength() const
{
    return rectangleLength;
}
double Rectangle::getRectangleWidth() const
{
    return rectangleWidth;
}
double Rectangle::calculateRectangleArea()
{
    return (rectangleLength * rectangleWidth);
}
double Rectangle::calculateRectanglePerimeter()
{
    return (2 * (rectangleLength + rectangleWidth));
}