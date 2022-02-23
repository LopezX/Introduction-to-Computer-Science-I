#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    Line L1, L2;

    L1.display(cout);
    cout << endl;

    L1.setSecondPoint(Point(4, 10));
    L1.display(cout);
    cout << endl;

    L1.setFirstPoint(Point(8, 0));
    L1.setSecondPoint(Point(1, 14));
    L1.display(cout);
    cout << endl;

    L2.setFirstPoint(Point(2, 1));
    L2.setSecondPoint(Point(2, 2));
    L2.display(cout);
    cout << endl;

    if (L1.isCollinear(L2)) {
        cout << "Collinear test passed" << endl;
    }
    else {
        cout << "Collinear test failed" << endl;
    }

    if (L1.isParallel(L2)) {
        cout << "Parallel test passed" << endl;
    }
    else {
        cout << "Parallel test failed" << endl;
    }

    if (L1.isPerpendicular(L2)) {
        cout << "Perpendicular test passed" << endl;
    }
    else {
        cout << "Perpendicular test failed" << endl;
    }

    cout << "Lines intersect at: ";
    L1.intersect(L2).display(cout);
    cout << endl;

    return 0;
}
