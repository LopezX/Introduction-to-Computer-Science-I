//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 17
//ASSIGNMENT DESCRIPTION:myFunctions
//DUE DATE:10/20/2021
//DATE CREATED:10/18/2021
//DATE LAST MODIFIED:10/19/2021
#ifndef MYFUNCTIONS_H_INCLUDED
#define MYFUNCTIONS_H_INCLUDED

#include <iostream>
/*
 *  Description: Finds the maximum between two integers
 *  Return: Integer
 *  Precondition: x and y are valid
 *  Postcondition: Returns the max integer
*/
int max (int x, int y);

/*
 *  Description: Finds the maximum between two doubles
 *  Return: Double
 *  Precondition: x and y are valid
 *  Postcondition: Returns the max double
*/
double max (double x, double y);

/*
 *  Description: Finds the maximum between an array of integers
 *  Return: Integer
 *  Precondition: a and n are valid
 *  Postcondition: Returns the max integer from array
*/
int max (int a[], int n);

/*
 *  Description: Finds the maximum between an array of doubles
 *  Return: Double
 *  Precondition: a and n are valid
 *  Postcondition: Returns the max double
*/
double max (double a[], int n);

/*
 *  Description: Finds the minimum between two integers
 *  Return: Integer
 *  Precondition: x and y are valid
 *  Postcondition: Returns the min integer
*/
int min (int x, int y);

/*
 *  Description: Finds the minimum between two doubles
 *  Return: Double
 *  Precondition: x and y are valid
 *  Postcondition: Returns the min double
*/
double min (double x, double y);

/*
 *  Description: Finds the minimum in an array of integers
 *  Return: Integer
 *  Precondition: a and n are valid
 *  Postcondition: Returns the min integer
*/
int min (int a[], int n);

/*
 *  Description: Finds the maximum in an array of doubles
 *  Return: Double
 *  Precondition: a and n are valid
 *  Postcondition: Returns the max double
*/
double min (double a[], int n);

/*
 *  Description: Finds the absolute value of an intger
 *  Return: Integer
 *  Precondition: x is valid
 *  Postcondition: Returns the absolute value of the integer
*/
int absoluteValue (int x);

/*
 *  Description: Finds the absolute balue of a double
 *  Return: Double
 *  Precondition: x is valid
 *  Postcondition: Returns the absolute value of the double
*/
double absoluteValue (double x);

/*
 *  Description: Finds the factorial of an integer
 *  Return: Double
 *  Precondition: x is valid
 *  Postcondition: Returns the factorial of the integer
*/
double factorial (int x);

/*
 *  Description: Finds the combination of an integer
 *  Return: Double
 *  Precondition: x is valid
 *  Postcondition: Returns the combination of the integer
*/
double combination (int x, int y);

/*
 *  Description: Finds the permutation of an integer
 *  Return: Double
 *  Precondition: x is valid
 *  Postcondition: Returns the combination of the integer
*/
double permutation(int x, int y);

#endif // MYFUNCTIONS_H_INCLUDED
