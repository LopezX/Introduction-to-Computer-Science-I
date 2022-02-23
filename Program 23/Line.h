//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 23
//ASSIGNMENT DESCRIPTION:Line Class
//DUE DATE:11/10/2021
//DATE CREATED:11/9/2021
//DATE LAST MODIFIED:11/9/2021
#ifndef LINE_H_
#define LINE_H_

#include <ostream>
#include <iostream>
#include "Point.h"

using namespace std;

class Line{
	private:
		Point p1, p2;

	public:
	    // description: Creates a line object
        // return: Line object
        // precondition: Points a and b are valid
        // postcondition: Creates a line object with Point p1 and p2
		Line(Point=Point(1,1), Point=Point(0,0));


		// description: Sets the first point of the line object
        // return: void
        // precondition: Point a is valid
        // postcondition: a is the new p1 (first point)
 		void setFirstPoint(const Point&);

 		// description: Sets the second point of the line object
        // return: void
        // precondition: Point a is valid
        // postcondition: a is the new p2 (second point)
		void setSecondPoint(const Point&);


		// description: Gets the first point of the line object
        // return: Point object
        // precondition: None
        // postcondition: Returns p1 of the line object
		Point getFirstPoint() const;

		// description: Gets the second point of the line object
        // return: Point object
        // precondition: None
        // postcondition: Returns p2 of the line object
		Point getSecondPoint() const;


		// description: Checks to see if the line object has a slope
        // return: bool
        // precondition: none
        // postcondition: Returns if line object has a slope
		bool hasSlope() const;

		// description: Calculates the slope of the line object
        // return: double
        // precondition: None
        // postcondition: Returns the slope of the line object
        double slope() const;

        // description: Calculates the y-intercept of the line object
        // return: double
        // precondition: None
        // postcondition: Returns the y-intercept of the line object
		double yIntercept() const;


		// description: Determines if two line objects are parallel
        // return: bool
        // precondition: Line a is valid
        // postcondition: Returns if the line objects are parallel
		bool isParallel(const Line&) const;

		// description: Determines if two line objects are collinear
        // return: bool
        // precondition: Line a is valid
        // postcondition: Returns if the line objects are collinear
		bool isCollinear(const Line&) const;

		// description: Determines if two line objects are perpendicular
        // return: bool
        // precondition: Line a is valid
        // postcondition: Returns if the line objects are perpendicular
		bool isPerpendicular(const Line&) const;


		// description: Calculates where two line objects intersect
        // return: Point object
        // precondition: Line a is vaild
        // postcondition: Returns the point of intersection
		Point intersect(const Line&) const;


		// description: Displays the equation of the line object
        // return: void
        // precondition: g is valid
        // postcondition: Prints the equation of the line object
		void display(ostream&) const;
};

#endif /* LINE_H_ */
