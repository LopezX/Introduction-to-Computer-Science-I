#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{

    matrix_t test1(2, 2), test2(2, 2), test3, test4, test5;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            test1.setValue(i, j, 3);
            test2.setValue(i, j, 3);
        }
    }
    test3 = test1 + test2;
    test4 = test1 - test2;
    test5 = test1 * test2;

    cout << "Hello" << endl;
    test1.display(cout);
    cout << endl;
    test3.display(cout);
    cout << endl;
    test4.display(cout);
    cout << endl;
    test5.display(cout);
    cout << endl;
    return 0;
}
