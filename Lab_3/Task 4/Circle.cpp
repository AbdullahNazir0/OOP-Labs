#include "Circle.h"

void Circle::setCircleRadius(double r)
{
    circleRadius = r;
}
double Circle::getCircleRadius() const
{
    return circleRadius;
}
double Circle::calculateCircleArea()
{
    return ((22 / 7) * circleRadius * circleRadius);
}
double Circle::calculateCirclePerimeter()
{
    return (2 * (22 / 7) * circleRadius);
}