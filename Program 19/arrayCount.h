//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 19
//ASSIGNMENT DESCRIPTION:Array Processing
//DUE DATE:10/27/2021
//DATE CREATED:10/24/2021
//DATE LAST MODIFIED:10/24/2021
#ifndef ARRAYCOUNT_H_INCLUDED
#define ARRAYCOUNT_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

/*
 *  Description: Finds the frequency of the integer v in the array
 *  Return: Integer
 *  Precondition: a, s and v are valid
 *  Postcondition: Returns frequency of v in the array a
*/
int arrayCount(int a[], int s, int v);

/*
 *  Description: Finds the frequency of the double v in the array
 *  Return: Integer
 *  Precondition: a, s and v are valid
 *  Postcondition: Returns frequency of v in the array a
*/
int arrayCount(double a[], int s, double v);

/*
 *  Description: Finds the frequency of the string v in the array
 *  Return: Integer
 *  Precondition: a, s and v are valid
 *  Postcondition: Returns frequency of v in the array a
*/
int arrayCount(string a[], int s, string v);

/*
 *  Description: Finds the frequency of the char v in the array
 *  Return: Integer
 *  Precondition: a and v are valid
 *  Postcondition: Returns frequency of v in the array a
*/
int arrayCount(char a[], char v);

/*
 *  Description: Finds the frequency of the integer v in the vector
 *  Return: Integer
 *  Precondition: a and v are valid
 *  Postcondition: Returns frequency of v in the vector a
*/
int arrayCount(vector<int> a, int v);

/*
 *  Description: Finds the frequency of the double v in the vector
 *  Return: Integer
 *  Precondition: a and v are valid
 *  Postcondition: Returns frequency of v in the vector a
*/
int arrayCount(vector<double> a, double v);

/*
 *  Description: Finds the frequency of the string v in the vector
 *  Return: Integer
 *  Precondition: a and v are valid
 *  Postcondition: Returns frequency of v in the vector a
*/
int arrayCount(vector<string> a, string v);

/*
 *  Description: Finds the frequency of the char v in the vector
 *  Return: Integer
 *  Precondition: a and v are valid
 *  Postcondition: Returns frequency of v in the vector a
*/
int arrayCount(vector<char> a, char v);

#endif // ARRAYCOUNT_H_INCLUDED
