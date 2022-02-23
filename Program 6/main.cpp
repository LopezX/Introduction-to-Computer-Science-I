//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 6
//ASSIGNMENT DESCRIPTION:Calculate the Quadratic Formula
//DUE DATE:09/10/2021
//DATE CREATED:09/08/2021
//DATE LAST MODIFIED:09/10/2021

/*
 * Data Abstraction:
 *     10 double variables (a, b, c, d, temp, root1, root2, X, Y)
 *         are created;
 *
 *         - a, b, c are values received from the user
 *         - d is the discriminate that determines if there are
 *               any roots
 *         - temp is used during sorting as a temporary value
 *         - root1 and root2 take in the values of the
 *               roots found (if there are any)
 *         - X and Y are the x- and y-coordinates, respectively,
 *               to the vertex of the parabola
 * Input:
 * 	   The program receives the user's input of 3 integers
 * Process:
 * 	   The program finds d = pow(b, 2.0) - (4 * a * c);
 *
 *     - If d < 0, numRoots is set to 0
 *     - If d = 0, numRoots is set to 1
 *     - If d > 0, numRoots is set to 2
 *
 *     If numRoots is greater than 0, then the program
 *         proceeds to calculate the root(s)
 *     The vertex is calculated
 *     Organizes the roots from least to greatest
 * Output:
 *     Outputs the roots from least to greatest, followed
 *         by the vertex of the parabola
 * Assumptions:
 * 	   It is assumed that the user inputs a number
 *     it is assumed the user inputs no other symbol other
 *         than a digit
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //Data Abstraction:
    double a, b, c, d, temp, root1, root2, X, Y;

    int numRoots = 0;

    //Input:
    cin >> a >> b >> c;

    //Process:

    //Discriminate
    d = pow(b, 2.0) - (4 * a * c);

    //Checking for roots
    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        if (d == 0) {
            numRoots = 1;
        }
        else if (d > 0) {
            root2 = (-b - sqrt(d)) / (2 * a);
            numRoots = 2;
        }
    }

    //Sorting the roots
    if ((numRoots == 2) && (root1 > root2)) {
        temp  = root1;
        root1 = root2;
        root2 = temp;
    }

    //Vertex coordinate for X
    X = -b / (2 * a);
    if (X == -0.00) {
        X = 0.00;
    }

    //Vertex coordinate for Y
    Y = (a * pow(X, 2.0)) + (b * X) + c;

    //Output:
    cout << fixed << setprecision(2);

    //Path of what to output for the roots
    if (numRoots == 0) {
        cout << "NO REAL ROOTS";
    }
    else {
        cout << root1;
        if (numRoots == 2) {
            cout << " " << root2;
        }
    }

    cout << "  (" << X << ", " << Y << ")" << endl;
    return 0;
}
