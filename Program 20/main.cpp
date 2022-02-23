//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 20
//ASSIGNMENT DESCRIPTION:Pascals Triangle
//DUE DATE:10/29/2021
//DATE CREATED:10/29/2021
//DATE LAST MODIFIED:10/29/2021

/*
Data Abstraction:
 * 3 integer variables do the following:
 *   - pascalRows gets the number of Rows for the
 *       Pascal's Triangle
 *   - beforeSpace gets the width of the spaces before
 *       the first digit of the row of the Pascal's
 *       Triangle is displayed
 *   - pascalSpace gets the multiplier of the space
 *       between the digits of the Pascal Triangle
 * 1 double variable, spacing, gets the highest value of
 *   the Pascal's Triangle to find pascalSpace
Input:
 * The program asks the user for a number of rows
Process:
 * The program finds the spacing multiplier before the first digit
 *   of Pascal's Triangle is shown and the spacing multiplier
 *   between the digits of the Pascal Triangle
Output:
 * For each row, the program does the following:
 *   - The program prints the appropriate number of spaces
 *       before the first digit appears
 *   - For each digit, the program sets the width and prints
 *       the digit of Pascal's Triangle
Assumptions:
 * It is assumed that user inputs a positive integer
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include "myFunctions.h"

using namespace std;

int main()
{
    //Data Abstraction:
    int pascalRows, beforeSpace = 1, pascalSpace = 1;
    double spacing;

    //Input:
    cout << "Please Enter The Number of Rows: ";
    cin >> pascalRows;
    cout << pascalRows << endl << endl;

    //Process:
    spacing = combination(pascalRows, pascalRows / 2);
    while (spacing / 10 > pow(10, 2 * (beforeSpace - 1))) {
        beforeSpace++;
        pascalSpace++;
    }

    //Output:
    for (int i = 0; i < pascalRows; i++) {

        for (int j = 0; j < pascalRows - i; j++) {
            cout << setw(2 * beforeSpace) << left << " ";
        }

        for (int k = 0; k < i + 1; k++) {
            cout << setw(4 * pascalSpace) << left << combination(i, k);
        }
        cout << endl;
    }

    return 0;
}
