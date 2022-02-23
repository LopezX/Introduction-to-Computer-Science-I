//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 29
//ASSIGNMENT DESCRIPTION: Time Class
//DUE DATE: 12/1/2021
//DATE CREATED: 11/22/2021
//DATE LAST MODIFIED: 11/23/2021

#ifndef CLOSESTPAIR_H_INCLUDED
#define CLOSESTPAIR_H_INCLUDED

#include <cmath>

using namespace std;

struct Point{
    double x;
    double y;

    Point(double a = 0, double b = 0){
        x = a;
        y = b;
    }
};

struct Pair{
    int indexPointOne;
    int indexPointTwo;
};

// description: Finds the closest Pair of Points in an array
// return: Pair
// precondition: Point array and int are valid
// postcondition: Returns a pair of points that are the closest
Pair Closest_Pair(Point P[], int n);

#endif // CLOSESTPAIR_H_INCLUDED
