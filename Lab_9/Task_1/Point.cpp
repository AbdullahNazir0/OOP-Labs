#include "Point.h"

// Default constructor
Point::Point() : x(0), y(0){}

// Parameterized constructor
Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord){}

// Setters
void Point::setX(double _x){
    x = _x;
}
void Point::setY(double _y){
    y = _y;
}

// Getters
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}

// Display function to print point details
void Point::display() const{
    std::cout << "The point is (" << x << ", " << y << ").\n";
}

// Function to update the coordinates of the point
void Point::updateCoordinates(double newX, double newY){
    x = newX;
    y = newY;
}