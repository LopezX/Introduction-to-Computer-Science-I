//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 4
//ASSIGNMENT DESCRIPTION:Sum The Digits In An Integer
//DUE DATE:09/03/2021
//DATE CREATED:08/27/2021
//DATE LAST MODIFIED:09/01/2021

/*
 * Data Abstraction:
 * 	   2 variables, n and sum, are initialized for use in
 *         computing the sum of the digits
 *     The text "Enter an integer between 0 and 9999999: " to
 *         enter an integer between the values
 * Input:
 * 	   The program reads values from 0 to 9999999 from the
 *         user
 * Process:
 * 	   The sum will be added up by finding the remainder of
 *         n % 10
 *     After the sum adds the value of n to the sum, n will
 *         divide by 10 to remove the last digit
 *     The process will repeat 6 times to get each individual
 *         digit of n and 7 times to add the sum of the digits
 *         of n
 * Output:
 * 	   The screen will print "The sum of the digits is "
 *         followed by the sum and followed by a period
 * Assumptions:
 * 	   It is assumed that the user inputs an integer
 * 	   It is assumed that the user inputs an number between 0
 *         and 9999999
 */
#include <iostream>

using namespace std;

int main()
{
    // Data Abstraction:
    int n;
    int sum = 0;

    cout << "Enter an integer between 0 and 9999999: ";

    // User Input:
    cin >> n;

    //Process:

    cout << n << endl;

    sum = n % 10;
    n = n / 10;

    sum = sum + n % 10;
    n = n / 10;

    sum = sum + n % 10;
    n = n / 10;

    sum = sum + n % 10;
    n = n / 10;

    sum = sum + n % 10;
    n = n / 10;

    sum = sum + n % 10;
    n = n / 10;

    sum = sum + n;

    //Output:
    cout << "The sum of the digits is " << sum << "." << endl;

    return 0;
}
