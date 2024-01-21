#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Default constructor
    Point();

    // Parameterized constructor
    Point(double xCoord, double yCoord);

    //Setters
    void setX(double _x);
    void setY(double _y);

    //Getters
    double getX() const;
    double getY() const;

    // Display function to print point details
    void display() const;

    // Function to update the coordinates of the point
    void updateCoordinates(double newX, double newY);
};


#endif