//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 13
//ASSIGNMENT DESCRIPTION: Fibonacci Array
//DUE DATE:10/06/2021
//DATE CREATED:10/04/2021
//DATE LAST MODIFIED:10/05/2021

/*
Data Abstraction:
    * 1 long long integer array, fib, holds 91 cases 
    of the Fibonacci Sequence
        - At the beginning, the array only hold two 
        values but is filled before the input stage
        of the program
    * 5 integer variables do the following:
        - numCases gets the number of cases the user 
        is going to input
        - n is used to find what nth term the user
        wants from Fibonacci Sequence
        - i is used to fill the array fib
        - j is used to keep track of what case the 
        program is on
        - k is used to find the nth term of the 
        Fibonacci Sequence the user wants
Input:
    * The user will enter the number of cases they want
    * The program will read the number of cases
    * For however many cases, the user will enter a case 
    that relates to what term they want in the Fibonacci
    sequence
Process:
    * The program will check that the current case does
    not exceed the number of cases
    * If the current case is less than or equal to the 
    number of cases, then the program will take in what 
    case the user wants
    * The program will check to see if the case entered
    equals a case in the fib array
    * If the number equals a case in the fib array, then
    the program proceeds to output
Output:
    * The program will output the case number, followed 
    by the nth term of the Fibonacci Sequence and its 
    value
Assumptions:
    * It is assumed the inputs are integers
    * It is assumed the integers for what nth term is 
    between 0 and 90 (91 cases total)
*/
#include <iostream>

using namespace std;

int main()
{
    //Data Abstraction:
    long long int fib[91] = {0, 1};
    int i, j, k, numCases, n;
    for (i = 2; i < 91; i++) {
        fib[i] = fib[i - 1] + fib [i - 2];
    }

    //Input:
    cin >> numCases;

    for (j = 1; j <= numCases; j++) {
        cin >> n;

        //Process:
        for (k = 0; k < 91; k++) {
            if (k == n) {

                //Output:
                cout << "case " << j << ": ";
                cout << "Fib(" << k << ") = ";
                cout << fib[k] << endl;
            }
        }
    }

    return 0;
}
