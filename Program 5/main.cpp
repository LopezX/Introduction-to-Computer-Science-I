//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 5
//ASSIGNMENT DESCRIPTION:Find the Arithmetic Mean, Geometric
//                       Mean, Harmonic Mean and Standard Deviation
//DUE DATE:09/08/2021
//DATE CREATED:09/07/2021
//DATE LAST MODIFIED:09/08/2021

/*
 * Data Abstraction:
 * 	   11 integer variables, a, b, c, d, e, tmp, A, B, C, D, and E,
 *         are used to echo print and compute the equations
 *     4 floating-point variables, arithMean, geoMean, harmMean,
 *         and stanDeviation, are used to hold the final value of
 *         their respective equation
 *     The text "Enter five numbers: " prompts the user to enter 5
 *         integers for the computation
 * Input:
 * 	   The program receives the user's input of 5 integers
 * Process:
 * 	   The original order of how the numbers were printed is
 *         saved in the respective uppercase of the letter variable
 *     The arithmetic mean is computed by adding each integer and
 *         divide by the number of integers (in this case, 5)
 *     The geometric mean is computed by multiplying the integers
 *         together, then finding the nth root of the product
 *         (in this case, the 5th root)
 *     The harmonic mean is computed by dividing the total number
 *         of integers (in this case, 5) by the sum of the
 *         reciprocals of the integers
 *     The standard deviation is computed by taking each number,
 *         subtracting the average from each number, square it,
 *         add them together, divide by the number of integers
 *         (in this case, 5), and square rooting it
 *     The integers are sorted from least to greatest, with the
 *         variable a being the lowest and e the highest
 * Output:
 *     The screen will echo print the integers how they were
 *         inputted
 * 	   The screen will print "Result:", followed by "Data: on
 *         another line. The screen will then display the
 *         integers from greatest to least
 *     The screen will print "Arithmetic Mean    = " followed
 *         by the arithmetic mean rounded to two decimal
 *         places
 *     The screen will print "Geometric  Mean    = " followed
 *         by the geometric mean rounded to two decimal
 *         places
 *     The screen will print "Harmonic   Mean    = " followed
 *         by the harmonic mean rounded to two decimal
 *         places
 *     The screen will print "Standard Deviation = " followed
 *         by the standard deviation rounded to two decimal
 *         places
 * Assumptions:
 * 	   It is assumed that the user inputs an integer
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    //Data Abstraction:
    int a, b, c, d, e, tmp;
    double arithMean, geoMean, harmMean, stanDeviation;

    cout << "Enter five numbers:" << endl;

    //Input:
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    //Process:

    //Calculate the arithmetic mean
    arithMean = (static_cast<double>(a) + b + c + d + e) / 5.0;

    //Calculate the geometric mean
    geoMean = pow((static_cast<double>(a) * b * c * d * e), (1.0/5.0));

    //Calculate the harmonic mean
    harmMean = 5.0 / ((1.0 / static_cast<double>(a)) + (1.0 / b)
                      + (1.0 / c) + (1.0 / d) + (1.0 / e));

    //Calculate the standard deviation
    stanDeviation = sqrt((pow(static_cast<double>(a) - arithMean, 2)
                              + pow(b - arithMean, 2)
                              + pow(c - arithMean, 2)
                              + pow(d - arithMean, 2)
                              + pow(e - arithMean, 2)) / 5.0);

    //Sort the numbers from least to greatest
    if(a > b){
        tmp = a;
        a   = b;
        b   = tmp;
    }
    if(a > c){
        tmp = a;
        a   = c;
        c   = tmp;
    }
    if(a > d){
        tmp = a;
        a   = d;
        d   = tmp;
    }
    if(a > e){
        tmp = a;
        a   = e;
        e   = tmp;
    }

    if(b > c){
        tmp = b;
        b   = c;
        c   = tmp;
    }
    if(b > d){
        tmp = b;
        b   = d;
        d   = tmp;
    }
    if(b > e){
        tmp = b;
        b   = e;
        e   = tmp;
    }

    if(c > d){
        tmp = c;
        c   = d;
        d   = tmp;
    }
    if(c > e){
        tmp = c;
        c   = e;
        e   = tmp;
    }

    if(d > e){
        tmp = d;
        d   = e;
        e   = tmp;
    }

    //Output:

    cout << endl << endl << endl;

    cout << "Result:" << endl << endl;

    cout << "Data:" << endl;
    cout << e << endl;
    cout << d << endl;
    cout << c << endl;
    cout << b << endl;
    cout << a << endl << endl;

    cout << "Arithmetic Mean    = ";
    cout << fixed << setprecision(2) << arithMean     << endl;
    cout << "Geometric  Mean    = ";
    cout << fixed << setprecision(2) << geoMean       << endl;
    cout << "Harmonic   Mean    = ";
    cout << fixed << setprecision(2) << harmMean      << endl;
    cout << "Standard Deviation = ";
    cout << fixed << setprecision(2) << stanDeviation << endl;

    return 0;
}
