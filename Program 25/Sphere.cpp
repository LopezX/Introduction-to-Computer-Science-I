//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 22
//ASSIGNMENT DESCRIPTION:Sphere Class
//DUE DATE:11/5/2021
//DATE CREATED:11/5/2021
//DATE LAST MODIFIED:11/5/2021
#include "Sphere.h"

Sphere::Sphere() {
    radius = 1;
    color = "green";
}

Sphere::Sphere(double r) {
    radius = r;
    color = "green";
}

Sphere::Sphere(double r, string c) {
    radius = r;
    color = c;
}

void Sphere::setRadius(double r) {
    radius = r;
}

double Sphere::getRadius() {
    return radius;
}
void Sphere::setColor(string c) {
    color = c;
}

string Sphere::getColor() {
    return color;
}

double Sphere::area() const {
    return 4.0 * PI * pow(radius, 2);
}

double Sphere::volume() const {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

bool Sphere::isEqual(const Sphere& s) const {
    return (this->radius == s.radius && this->color == s.color);
}
