#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point p1, p2(5), p3(-2, 10), p4(3, 45), p5(-5, 62);

    cout << "Point 1 = ";
    p1.display(cout);
    cout << endl;

    cout << "Point 2 = ";
    p2.display(cout);
    cout << endl;

    cout << "Point 3 = ";
    p3.display(cout);
    cout << endl;

    cout << "Point 4 = ";
    p4.display(cout);
    cout << endl;

    cout << "Point 5 = ";
    p5.display(cout);
    cout << endl;

    cout << endl << endl;

    cout << "MidPoint 1 & 5 = ";
    Point p6 = p1.midPoint(p5);
    p6.display(cout);
    cout << endl;

    cout << "MidPoint 3 & 5 = ";
    Point p7 = p3.midPoint(p5);
    p7.display(cout);
    cout << endl;

    cout << endl << endl;

    cout << "Distance from 2 to 3 = ";
    double dist23 = p2.distance(p3);
    cout << dist23 << endl;

    return 0;
}
