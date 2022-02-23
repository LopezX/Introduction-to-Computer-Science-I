//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 16
//ASSIGNMENT DESCRIPTION:Multiplication Table
//DUE DATE:10/15/2021
//DATE CREATED:10/10/2021
//DATE LAST MODIFIED:10/13/2021

/*
Data Abstraction:
    * 6 integer variables do the following:
        - row1 gets the starting row of the table
        - row2 gets the ending row of the table
        - col1 gets the starting column of the table
        - col2 gets the ending column of the table
        - rowShift determines whether the change in row is positive or
            negative
        - colShift determines whether the change in column is positive
            or negative
Input:
    * The program asks the user for the dimensions of the multiplication
        table, which includes what number the row or column will start
        on and what number will they finish on
Process:
    * The program checks to see if the starting row is greater than the
        ending row; if so, the program will decrement the row, else it  
        will increment the row
    * The program checks to see if the starting column is greater than 
        the ending column; if so, the program will decrement the column, 
        else it will increment the column
Output:
    * The program will output the multiplication table with the numbers
        between and including the row and column parameters on the top
        and left side of the table (excluding the top-left corner, which
        is blank), and then the product of the row and column
Assumptions:
    * It is assumed the inputs are integers
    * It is assumed the products are no greater than 3 digits
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    int row1, row2, col1, col2;
    int rowShift = 1, colShift = 1;

    //Input:
    cout << "Please Enter Four Integers R1 R2 C1 C2: ";
    cin >> row1 >> row2 >> col1 >> col2;
    cout << row1 << " " << row2 << " " << col1 << " " << col2 << endl;

    //Process:
    if (row1 > row2) {
        rowShift = -1;
    }
    if (col1 > col2) {
        colShift = -1;
    }

    for (int i = row1 - rowShift; i != row2 + rowShift; i += rowShift) {
        for (int j = col1 - colShift; j != col2 + colShift; j += colShift) {
            
            //Output
            if (j == col1 - colShift && i == row1 - rowShift) {
                cout << setw(8) << " ";
            }
            else if (j == col1 - colShift) {
                cout << setw(8) << left << i;
            }
            else if (i == row1 - rowShift) {
                cout << setw(6) << left << j;
            }
            else {
                cout << setw(6) << left << i * j;
            }
        }
        cout << endl;

        for (int k = col1 - colShift; k != col2 + colShift; k += colShift) {
            cout << "-----|";
        }
        cout << endl;
    }

    return 0;
}