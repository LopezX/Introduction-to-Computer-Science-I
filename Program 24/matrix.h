//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 24
//ASSIGNMENT DESCRIPTION:Matrix Arithmetic and Objects
//DUE DATE:11/12/2021
//DATE CREATED:11/12/2021
//DATE LAST MODIFIED:11/12/2021
#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <ostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;
const int WIDTH = 9;

class matrix_t{
private:
	int row, col;
	double data[MAX_SIZE][MAX_SIZE] = {{0}};

public:
    //description: Constructs a matrix object
    //return: None
    //precondition: None
    //postcondition: Creates a matrix object
	matrix_t();

    //description: Constructs a matrix object with set rows and columns
    //return: None
    //precondition: x and y are valid
    //postcondition: Creates matrix object with x rows and y columns
	matrix_t(int, int);


	//description: Sets the row of a matrix object
    //return: void
    //precondition: x is valid
    //postcondition: Sets the rows of the matrix object to x
	void setRow(int);

	//description: Sets the row of a matrix object
    //return: void
    //precondition: y is valid
    //postcondition: Sets the rows of the matrix object to y
	void setCol(int);

	//description: Sets the value of the matrix at a specific location
    //return: void
    //precondition: x, y and a are valid
    //postcondition: Sets the value of the matrix at row x, column y, to a
	void setValue(int, int, double);


	//description: Gets the number of rows of the matrix
    //return: int
    //precondition: None
    //postcondition: Returns the number of rows
	int getRow() const;

	//description: Gets the number of columns of the matrix
    //return: int
    //precondition: None
    //postcondition: Returns the number of columns
	int getCol() const;

	//description: Gets the value of a matrix at a specific location
    //return: double
    //precondition: x and y are valid
    //postcondition: Returns the value at row x, column y
	double getValue(int, int) const;


	//description: Displays the matrix
    //return: void
    //precondition: out is valid
    //postcondition: Prints the matrix to the screen
	void display(ostream&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	double determinant() const;


	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t add(const matrix_t&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t subtract(const matrix_t&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t multiply(const matrix_t&) const;


	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t operator+(const matrix_t&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t operator-(const matrix_t&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	matrix_t operator*(const matrix_t&) const;

	//description:
    //return:
    //precondition:
    //postcondition:
	double* operator[](int n);

};

#endif // MATRIX_H_INCLUDED
