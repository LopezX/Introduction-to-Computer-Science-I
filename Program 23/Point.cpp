//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 21
//ASSIGNMENT DESCRIPTION:Point Struct
//DUE DATE:11/3/2021
//DATE CREATED:11/3/2021
//DATE LAST MODIFIED:11/3/2021
#include "Point.h"

Point::Point(int a, int b) {
    x = a;
    y = b;
}

void Point::display(ostream& o) const {
    o << "(" << this->x << "," << this->y << ")";
}

double Point::distance(const Point& p) const {
    double dist;
    dist = sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
    return dist;
}

Point Point::midPoint(const Point& p) const {
    Point mid;
    double x, y;

    if (p.x < 0 && this->x >= 0) {
        x = (this->x + p.x) / 2.0;
    }
    else if(p.x >= 0 && this->x < 0) {
        x = (-this->x + p.x) / 2.0;
    }
    else {
        x = (this->x + p.x) / 2.0;
    }

    if (x >= 0.5) {
        x += 0.5;
        mid.x = x;
    }
    else {
        x -= 0.5;
        mid.x = x;
    }



    if (p.y < 0 && this->y >= 0) {
        y = (this->y + p.y) / 2.0;
    }
    else if(p.y >= 0 && this->y < 0) {
        y = (-this->y + p.y) / 2.0;
    }
    else {
        y = (this->y + p.y) / 2.0;
    }

    if (y >= 0.5) {
        y += 0.5;
        mid.y = y;
    }
    else {
        y -= 0.5;
        mid.y = y;
    }

    return mid;
}
