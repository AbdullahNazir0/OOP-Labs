#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Circle circle1;
    Rectangle rectangle1;
    Triangle triangle1;

    while (true)
    {
        int choice;
        cout << "Enter 1 to perform operations on circle.\n"
                "Enter 2 to perform operations on rectangle.\n"
                "Enter 3 to perform operations on triangle.\n"
                "Enter 4 to exit.\n"
                "You entered: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            double radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            circle1.setCircleRadius(radius);
            cout << "The area of circle is " << circle1.calculateCircleArea() << endl;
            cout << "The perimeter of circle is " << circle1.calculateCirclePerimeter() << endl;
            break;
        case 2:
            double length;
            double width;
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter width of rectangle: ";
            cin >> width;
            rectangle1.setRectangleLength(length);
            rectangle1.setRectangleWidth(width);
            cout << "The area of rectangle is " << rectangle1.calculateRectangleArea() << endl;
            cout << "The perimeter of rectangle is " << rectangle1.calculateRectanglePerimeter() << endl;
            break;
        case 3:
            double base;
            double height;
            double hypotenuse;
            cout << "Enter base of circle: ";
            cin >> base;
            cout << "Enter height of circle: ";
            cin >> height;
            cout << "Enter hypotenuse of circle: ";
            cin >> hypotenuse;
            triangle1.setTriangleBase(base);
            triangle1.setTriangleHeight(height);
            triangle1.setTriangleHypotenuse(hypotenuse);
            cout << "The area of traingle is " << triangle1.calculateTriangleArea() << endl;
            cout << "The perimeter of trianle is " << triangle1.calculateTrianglePerimeter() << endl;
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid input. Please Try Again." << endl;
            break;
        }
    }

    return 0;
}