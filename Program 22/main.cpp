#include <iostream>
#include <iomanip>
#include "Sphere.h"

using namespace std;

int main()
{
    Sphere S1, S2(2.0), S3(25.60, "blue"), S4;
    cout << setprecision(2) << fixed;

    cout << "Sphere 1" << endl;
    cout << "Radius = " << S1.getRadius() << endl;
    cout << "Color = " << S1.getColor() << endl;
    cout << "Area = " << S1.area() << endl;
    cout << "Volume = " << S1.volume() << endl;
    cout << endl;

    if (S1.isEqual(S4)) {
        cout << "isEqual Works!!!" << endl;
    }
    else {
        cout << "isEqual Failed!!!" << endl;
    }
    cout << endl;

    S1.setRadius(25.60);
    S1.setColor("blue");

    cout << "Sphere 1" << endl;
    cout << "Radius = " << S1.getRadius() << endl;
    cout << "Color = " << S1.getColor() << endl;
    cout << "Area = " << S1.area() << endl;
    cout << "Volume = " << S1.volume() << endl;
    cout << endl;

    cout << "Sphere 2" << endl;
    cout << "Radius = " << S2.getRadius() << endl;
    cout << "Color = " << S2.getColor() << endl;
    cout << "Area = " << S2.area() << endl;
    cout << "Volume = " << S2.volume() << endl;
    cout << endl;

    cout << "Sphere 3" << endl;
    cout << "Radius = " << S3.getRadius() << endl;
    cout << "Color = " << S3.getColor() << endl;
    cout << "Area = " << S3.area() << endl;
    cout << "Volume = " << S3.volume() << endl;
    cout << endl;

    cout << "Sphere 4" << endl;
    cout << "Radius = " << S4.getRadius() << endl;
    cout << "Color = " << S4.getColor() << endl;
    cout << "Area = " << S4.area() << endl;
    cout << "Volume = " << S4.volume() << endl;
    cout << endl;

    if (S1.isEqual(S3)) {
        cout << "isEqual Works!!!" << endl;
    }
    else {
        cout << "isEqual Failed!!!" << endl;
    }
    cout << endl;

    return 0;
}
