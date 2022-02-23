//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 23
//ASSIGNMENT DESCRIPTION:Line Class
//DUE DATE:11/10/2021
//DATE CREATED:11/9/2021
//DATE LAST MODIFIED:11/10/2021
#include "Line.h"

Line::Line(Point a, Point b) {
    p1 = a;
    p2 = b;
}


void Line::setFirstPoint(const Point& a) {
    p1 = a;
}

void Line::setSecondPoint(const Point& a) {
    p2 = a;
}


Point Line::getFirstPoint() const {
    return p1;
}

Point Line::getSecondPoint() const {
    return p2;
}


bool Line::hasSlope() const {
    return p1.x != p2.x;
}

double Line::slope() const {
    double slope = 0;
    if (hasSlope()) {
        slope = static_cast<double>(p2.y - p1. y) / (p2.x - p1.x);
    }
    return slope;
}

double Line::yIntercept() const {
    double yInt = 0;
    if (hasSlope()) {
        yInt = static_cast<double>(p1.y) - (slope() * p1.x);
    }
    return yInt;
}


bool Line::isParallel(const Line& a) const {
    bool flag = false;
    if (this->hasSlope() && a.hasSlope()) {
        if (this->slope() == a.slope()) {
            if (this->yIntercept() != a.yIntercept()) {
                flag = true;
            }
        }
    }
    else if (!this->hasSlope() && !a.hasSlope()) {
        if (this->p1.x != a.p1.x) {
            flag = true;
        }
    }
    return flag;
}

bool Line::isCollinear(const Line& a) const {
    bool flag = false;
    if (this->hasSlope() && a.hasSlope()) {
        if (this->slope() == a.slope()) {
            if (this->yIntercept() == a.yIntercept()) {
                flag = true;
            }
        }
    }
    else if (!this->hasSlope() && !a.hasSlope()) {
        if (this->p1.x == a.p1.x) {
            flag = true;
        }
    }
    return flag;
}

bool Line::isPerpendicular(const Line& a) const {
    bool flag = false;
    if (this->hasSlope() && a.hasSlope()) {
        if (this->slope() == -1.0 / a.slope()) {
            flag = true;
        }
    }
    else if (a.hasSlope()) {
        if (a.slope() == 0) {
            flag = true;
        }
    }
    else if (this->hasSlope()) {
        if (this->slope() == 0) {
            flag = true;
        }
    }
    return flag;
}


Point Line::intersect(const Line& a) const {
    Point p;
    double x, y;
    if (this->hasSlope() && a.hasSlope()) {
        x = (a.yIntercept() - this->yIntercept())
            / (this->slope() - a.slope());
        if (x > 0.5) {
            p.x = x + 0.5;
        }
        else {
            p.x = x - 0.5;
        }

        y = (this->slope() * x) + this->yIntercept();
        if (y > 0.5) {
            p.y = y + 0.5;
        }
        else {
            p.y = y - 0.5;
        }

        p.x = x;
        p.y = y;
    }
    else if (this->hasSlope()) {
        p.x = a.p1.x;
        p.y = (this->slope() * a.p1.x) + this->yIntercept();
    }
    else if (a.hasSlope()) {
        p.x = this->p1.x;
        p.y = (this->slope() * this->p1.x) + this->yIntercept();
    }
    return p;
}


void Line::display(ostream& g) const {
    if (hasSlope()) {
        g << "y = ";
        if (slope() != 0) {
            if (slope() == -1) {
                g << "-";
            }
            else if (slope() != 1) {
                g << slope();
            }
            g << "x";
            if (yIntercept() != 0) {
                if (yIntercept() > 0) {
                    g << " + " << yIntercept();
                }
                else {
                    g << " - " << -yIntercept();
                }
            }
        }
        else {
            g << yIntercept();
        }
    }
    else {
        g << "x = " << p1.x;
    }
}
