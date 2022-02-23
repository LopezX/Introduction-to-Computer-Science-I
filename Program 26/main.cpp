//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 26
//ASSIGNMENT DESCRIPTION:Array of Spheres
//DUE DATE:11/17/2021
//DATE CREATED:11/15/2021
//DATE LAST MODIFIED:11/17/2021

/*
Data Abstraction:
    1 line array, lines, holds two line objects
    3 point objects do the following:
        firstPoint holds the x and y of the first point
            of a line
        secondPoint holds the x and y of the second point
            of a line
        intersection is the point where the two lines
            intersect
    5 double variables do the following:
        a gets the coefficient of x
        b gets the coefficient of y
        c gets the constant of the line
        x gets the x-coordinate of a point
        y gets the y-coordinate of a point
    1 string variable, eq, gets the equation from the user
    1 stringstream, ss, gets the string from the user to
        assist with separating the variables of a, b, and c
Input:
    The program gets the user's input of a line equation one
        at a time and going to the process for each line.
        Two lines will be inputted.
Process:
    Once a line is entered, a, b, c, x and y are set to 0
    The stringstream is cleared and holds an empty string
    The stringstream gets the string that was inputted
    The program calls the function setCoef to set the
        coefficients of a, b, and c
    Once all coefficients are set, x and y are calculated
        and rounded to the nearest integer
    There are four cases to account for when setting the
        points of a line:
            If a is 0, then the line is a constant y value;
                therefore, the y-values are the same for
                the two points, but the x-values are not
            If b is 0, then the line is a constant x value;
                therefore, the x-values are the same for
                the two points, but the y-values are not
            If c is 0, then the line intersects at the origin;
                therefore, the first point is at the origin
                and the second is at (a, b)
            If none of the conditions are satisfied, then
                the x-intercept is set as one point and
                the y-intercept is set as the other
    The points are set as the first point and second point
        of the current line in the array
Output:
    If the lines are parallel or collinear, then the program
        prints out "NO SOLUTION", else the program prints
        where the two lines intersect
Assumptions:
    It is assumed the user gives a valid line to the function
    It is assumed the equation has least one term (ax, by,
        or c) and no more than three
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Line.h"

using namespace std;

// description: Gets the coefficient of x or y
// return: double
// precondition: string is valid
// postcondition: Returns the coefficient of x or y term
double getCoef(string);

// description: Sets the coefficient of x or y
// return: void
// precondition: stringstream and three doubles are valid
// postcondition: Sets the value of a, b, and c
void setCoef(stringstream&, double&, double&, double&);

int main()
{
    //Data Abstraction:
    Line lines[2];
    Point firstPoint(0, 0), secondPoint(0, 0), intersection;
    double a, b, c;
    string eq;
    stringstream ss;

    //Input:
    for (int i = 0; i < 2; i++) {
        getline(cin, eq);

        //Process:
        a = 0;
        b = 0;
        c = 0;

        ss.clear();
        ss.str("");
        ss << eq;
        setCoef(ss, a, b, c);

        if (b == 0) {
            firstPoint.x = c/a;
            firstPoint.y = 0;
            secondPoint.x = c/a;
            secondPoint.y = 1;
        }
        else {
            firstPoint.x = 0;
            firstPoint.y = c/b;
            secondPoint.x = 1;
            secondPoint.y = (c-a)/b;
        }

        lines[i].setFirstPoint(firstPoint);
        lines[i].setSecondPoint(secondPoint);
    }

    //Output:
    if (lines[0].isParallel(lines[1]) || lines[0].isCollinear(lines[1])) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        intersection = lines[0].intersect(lines[1]);
        cout << "SOLUTION: ";
        intersection.display(cout);
        cout << endl;
    }
    return 0;
}

double getCoef(string token){
    double a;
    stringstream ss2;
    ss2 << token;
    if (token.size() == 1) {
        a = 1;
    }
    else if (token.size() == 2 && token[0] == '-') {
        a = -1;
    }
    else {
        ss2.str(token.substr(0, token.size() - 1));
        ss2 >> a;
    }
    return a;
}

void setCoef(stringstream& ss, double& a, double& b, double& c) {
    int side = 1;
    int sign = 1;
    string token;
    stringstream ss2;
    while (ss >> token) {
        if (token.find('x') != string::npos) {
            a = getCoef(token) * side * sign;
            sign = 1;
        }
        else if (token.find('y') != string::npos) {
            b = getCoef(token) * side * sign;
            sign = 1;
        }
        else if (token == "=") {
            side = -1;
        }
        else if (token == "-") {
            sign = -1;
        }
        else if (token != "+") {
            ss2 << token;
            ss2 >> c;
            c *= sign * side * -1;
            sign = 1;
        }
    }
}
