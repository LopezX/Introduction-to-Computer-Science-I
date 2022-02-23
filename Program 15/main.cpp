//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 15
//ASSIGNMENT DESCRIPTION:Square Matrix
//DUE DATE:10/13/2021
//DATE CREATED:10/10/2021
//DATE LAST MODIFIED:10/13/2021

/*
Data Abstraction:
    * 1 integer array, matrixArray, is a 2 dimensional
        array with 100 by 100 storage units
    * 6 integer variables do the following:
        - matrixNum gets the size of the matrix from the
            user
        - num is used to input values into the matrix
            array
        - row1 and row2 are the parameters for the row 
            that will hold num
        - col1 and col2 are the parameters for the column
            that will hold num
Input:
    * The program is in a do-while loop until the input
        from the user is 0
    * While in the loop, the program recieves an input from
        the user and then proceeds to process
Process:
    * The program establishes row1 and col1 as 0 (the 
        first row and column of the array) and row2 and col2
        as one under the input recieved (last row and 
        column of the array)
    * The program establishes num as 1
    * The program proceeds to a do-while loop while row1 is 
        less than or equal to row2:
        - The program goes through the square with the 
            boundaries of row1, row2, col1 and col2, and
            inputs num into the array that are in the row or
            column equal to row1, row2, col1 and col2
        - Once the square recieves its data, row1, col1 and
            num are incremented, and row2 and col2 are
            decremented
Output:
    * The program goes through each row and column of the array
        and prints out the matrix to the screen
Assumptions:
    * The input is a positive integer
    * The input is not greater than 100
    * The input is not less than 0
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    int matrixNum, num;
    int matrixArray[100][100];
    int row1, row2, col1, col2;

    //Input:
    do {
        cin >> matrixNum;

        //Process:
        row1 = 0;
        row2 = matrixNum - 1;

        col1 = 0;
        col2 = matrixNum - 1;
        
        num = 1;

        do {
            for (int i = row1; i <= row2; i++) {
                for (int j = col1; j <= col2; j++) {
                    if (i == row1) {
                        matrixArray[row1][j] = num;
                    }
                    else if (i == row2) {
                        matrixArray[row2][j] = num;
                    }
                    else {
                        matrixArray[i][col1] = num;
                        matrixArray[i][col2] = num;
                    }
                }
            }
            num++;
            row1++;
            row2--;
            col1++;
            col2--;
        } while (row1 <= row2);

        //Output:
        for (int i = 0; i < matrixNum; i++) {
            for (int j = 0; j < matrixNum; j++) {
                if (j == matrixNum - 1) {
                    cout << matrixArray[i][j];
                }
                else {
                    cout << setw(4) << left << matrixArray[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    } while (matrixNum != 0);

    return 0;
}
