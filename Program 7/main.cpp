//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 7
//ASSIGNMENT DESCRIPTION:Letter Grade
//DUE DATE:09/15/2021
//DATE CREATED:09/09/2021
//DATE LAST MODIFIED:09/13/2021

/*
 * Data Abstraction:
 *     5 double variables, a, b, c, d and e, are used to get
 *         the input from the user
 *     1 double variable, temp, assists with sorting the 
 *         input from greatest to least
 *     1 boolean value, isLegitScores, is set to true and 
 *         changes if any input does not fit within set 
 *         parameters
 *     9 double variables, A, B, C, D, E, avg, min, max and
 *         med, are created; their purposes:
 *
 *         - A, B, C, D and E copy the input from the user,
 *               according to its respective lowercase letter
 *         - avg takes the average of a, b, c, d and e
 *         - min receives the minimum value of the 5 inputs
 *         - max receives the maximum value of the 5 inputs
 *         - med recieves the median value of the 5 inputs
 * 
 *     1 character variable, letterGrade, is used to give
 *         the letter grade based on the average of the 
 *         test scores
 * Input:
 * 	   The program receives the user's input of 5 integers
 * Process:
 *     The program first checks to see if a, b, c, d, or e 
 *         is within 0 and 100, including 0 and 100. If not, 
 *         isLegitScores is set to false.
 * 	   If isLegitScores is set to true, the program copies the 
 *         input to the double variables A, B, C, D and E, 
 *         based on its respective lowercase letter
 *     The program sorts a, b, c, d and e from greatest to 
 *         least, using temp to assist in the sorting
 *     The program uses and equation to find the average of
 *         of the inputs, stroing it in avg
 *     The program uses if-statements to determine what 
 *         letter grade is stored to letterGrade
 *     max is set to highest value of the integers
 *     min is set to lowest value of the integers
 *     med is set to the middle value of the integers
 * Output:
 *     The program prints "Please Enter Five Test Scores", 
 *         followed by the copied data
 *     If isLegitScores is true, the program prints the 
 *         average, the grade, the minimum, the maximum and 
 *         the median to the screen
 *     If isLegitScores is false, the program prints: 
 *         "ERROR: BAD DATA" to the screen
 * Assumptions:
 *     It is assumed the user inputs no other symbol other
 *         than a digit
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //Data Abstraction:
    double a, b, c, d, e, temp;
    bool isLegitScores = true;
    double A, B, C, D, E, avg, min, max, med;
    char letterGrade;

    //Input:
    cin >> a >> b >> c >> d >> e;

    //Process:
    A = a;
    B = b;
    C = c;
    D = d;
    E = e;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        temp = a;
        a = d;
        d = temp;
    }
    if (a > e) {
        temp = a;
        a = e;
        e = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        temp = b;
        b = d;
        d = temp;
    }
    if (b > e) {
        temp = b;
        b = e;
        e = temp;
    }

    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
    if (c > e) {
        temp = c;
        c = e;
        e = temp;
    }

    if (d > e) {
        temp = d;
        d = e;
        e = temp;
    }

    min = a;
    if (min < 0) {
        isLegitScores = false;
    }
    
    max = e;
    if (max > 100) {
        isLegitScores = false;
    }

    med = c;

    avg = (A + B + C + D + E) / 5;

    if (avg <= 59.49) {
        letterGrade = 'F';
    }
    else if (avg <= 69.49) {
        letterGrade = 'D';
    }
    else if (avg <= 79.49) {
        letterGrade = 'C';
    }
    else if (avg <= 89.49) {
        letterGrade = 'B';
    }
    else {
        letterGrade = 'A';
    }
    

    //Output:
    cout << fixed << setprecision(2);

    cout << "Please Enter Five Test Scores." << endl;
    cout << A << " " << B << " " << C << " " << D << " " << E;
    cout << endl << endl;

    if (isLegitScores == (false)) {
        cout << "ERROR: BAD DATA" << endl;
    }
    else {
        cout << "Average = " << avg << endl;
        cout << "Grade   = " << letterGrade << endl;
        cout << "Min     = " << min << endl;
        cout << "Max     = " << max << endl;
        cout << "Median  = " << med << endl;
    }
    return 0;
}
