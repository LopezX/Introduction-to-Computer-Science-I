//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 18
//ASSIGNMENT DESCRIPTION:myFunctions
//DUE DATE:10/21/2021
//DATE CREATED:10/20/2021
//DATE LAST MODIFIED:10/20/2021
#ifndef MYFUNCTIONS_H_INCLUDED
#define MYFUNCTIONS_H_INCLUDED

#include <iostream>

using namespace std;

/*
 *  Description: Finds the length of the s1
 *  Return: Integer
 *  Precondition: s1 is valed
 *  Postcondition: Length of s1 is returned
*/
int Strlen(const char s1[]);

/*
 *  Description: Copies characters in s2 into s1
 *  Return: Void
 *  Precondition: s1 and s2 are valid
 *  Postcondition: s2 is copied into s1
*/
void Strcpy(char s1[], const char s2[]);

/*
 *  Description: Compares s1 to s2 to see if they are the same
 *  Return: Integer
 *  Precondition: s1 and s2 are valid
 *  Postcondition: Returns an integer if the strings are the same or not
*/
int Strcmp(const char s1[], const char s2[]);

/*
 *  Description: Adds s2 to the end of s1
 *  Return: Void
 *  Precondition: s1 and s2 are valid
 *  Postcondition: Returns s1 with s2 added to the end
*/
void Strcat(char s1[], const char s2[]);

#endif // CSTRING_H_INCLUDED
