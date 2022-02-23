//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 22
//ASSIGNMENT DESCRIPTION:Sphere Class
//DUE DATE:11/5/2021
//DATE CREATED:11/5/2021
//DATE LAST MODIFIED:11/5/2021
#ifndef SPHERE_H_INCLUDED
#define SPHERE_H_INCLUDED

#include <ostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

class Sphere {
    public:
        // description: Creates a Sphere object
        // return: Sphere object
        // precondition: None
        // postcondition: Sphere Object with radius 1 and color "green"
        Sphere();

        // description: Creates a Sphere object
        // return: Sphere object
        // precondition: r is valid
        // postcondition: Sphere object with radius r and color "green"
        Sphere(double);

        // description: Creates a Sphere object
        // return: Sphere object
        // precondition: r and c are valid
        // postcondition: Sphere object with radius r and color c
        Sphere(double, string);

        // description: Sets the radius of the sphere object
        // return: void
        // precondition: r is valid
        // postcondition: Sets radius of sphere object to r
        void setRadius(double);

        // description: Gets the radius of the sphere object
        // return: double
        // precondition: none
        // postcondition: Returns the radius of the sphere object
        double getRadius();

        // description: Sets the color of the sphere object
        // return: void
        // precondition: c is valid
        // postcondition: Sets the color of the sphere object to c
        void setColor(string);

        // description: Gets the color of the sphere object
        // return: string
        // precondition: none
        // postcondition: Returns the color of the sphere object
        string getColor();

        // description: Finds the surface area of the sphere object
        // return: double
        // precondition: none
        // postcondition: Returns the surface area of the sphere object
        double area() const;

        // description: Finds the volume of the sphere object
        // return: double
        // precondition: none
        // postcondition: Returns the volume of the sphere
        double volume() const;

        // description: Compares two spheres objects
        // return: bool
        // precondition: s is valid
        // postcondition: Returns whether two spheres are the same
        bool isEqual(const Sphere&) const;
    private:
        double radius;
        string color;
};

#endif // SPHERE_H_INCLUDED
