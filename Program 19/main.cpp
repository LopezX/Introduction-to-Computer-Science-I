#include <iostream>
#include "arrayCount.h"

using namespace std;

int main()
{
    int i[10] = {1, 2, 3, 1, 1, 3, 5, 6, 8, 0};
    cout << arrayCount(i, 10, 1) << endl;

    double d[10] = {1.1, 1.1, 1.1, 7.0, 1, 4, 9.1, 8.8, 9.3, 1.2};
    cout << arrayCount(d, 10, 1.1) << endl;

    string s[10] = {"Hi", "Hi", "Hi", "hi", "sh", "dhajfda", "juh", "kay", "hy", "hI"};
    cout << arrayCount(s, 10, "Hi") << endl;

    char c[10] = {'c', 'c', 'c', 'h', 'h', 'h', 'h', 'h', 'h', 'h'};
    cout << arrayCount(c, 'h') << endl;

    vector<int> I(10);
    I = {1, 2, 3, 1, 1, 3, 5, 6, 8, 0};
    cout << arrayCount(I, 1) << endl;

    vector<double> D(10);
    D = {1.1, 1.1, 1.1, 7.0, 1, 4, 9.1, 8.8, 9.3, 1.2};
    cout << arrayCount(D, 1.1) << endl;

    vector<string> S(10);
    S = {"Hi", "Hi", "Hi", "hi", "sh", "dhajfda", "juh", "kay", "hy", "hI"};
    cout << arrayCount(S, "Hi") << endl;

    vector<char> C(10);
    C = {'c', 'c', 'c', 'h', 'h', 'h', 'h', 'h', 'h', 'h'};
    cout << arrayCount(C, 'c') << endl;

    return 0;
}
