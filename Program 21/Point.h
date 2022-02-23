//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 21
//ASSIGNMENT DESCRIPTION:Point Struct
//DUE DATE:11/3/2021
//DATE CREATED:11/3/2021
//DATE LAST MODIFIED:11/3/2021
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <ostream>
#include <cmath>

using namespace std;

struct Point {
    int x, y;

    // description: Creates a point object
    // return: Point object
    // precondition: a and/or b is/are valid (if applied)
    // postcondition: Returns a point object with x and y values
    Point(int = 0, int = 0);

    // description: displays the Point object in the following format: (x,y)
    // return: void
    // precondition: cout is valid
    // postcondition: prints the point object to the screen
    void display(ostream&) const;

    // description: Finds the mid point between two points
    // return: Point object
    // precondition: Point p and point called are valid
    // postcondition: Returns the mid point
    Point midPoint(const Point&) const;

    // description: Finds the distance from two points
    // return: double
    // precondition: Point p is valid
    // postcondition: Returns a double of the distance
    double distance(const Point&) const;
};

#endif // POINT_H_INCLUDED
