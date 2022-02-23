//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 29
//ASSIGNMENT DESCRIPTION: Time Class
//DUE DATE: 12/1/2021
//DATE CREATED: 11/22/2021
//DATE LAST MODIFIED: 11/23/2021

#ifndef CLASSFUNCTIONS_H_INCLUDED
#define CLASSFUNCTIONS_H_INCLUDED

#include <iostream>
#include <iomanip>

using namespace std;

class Student {
    private:

    string firstName;
    string lastName;
    int classification;
    int zip;
    int age;
    string hometown;
    double gpa;


    public:

    // description: Sets the first name of the student
    // return: void
    // precondition: string is valid
    // postcondition: Sets the first name of the student object
    void setFirstName(string);

    // description: Sets the last name of the student
    // return: void
    // precondition: string is valid
    // postcondition: Sets the last name of the student object
    void setLastName(string);

    // description: Sets the classification of the student
    // return: void
    // precondition: string is valid
    // postcondition: Sets the classification of the student object
    void setClassification(string);

    // description: Sets the ZIP of the student
    // return: void
    // precondition: int is valid
    // postcondition:
    void setZIP(int);

    // description: Sets the age of the student
    // return: void
    // precondition: int is valid
    // postcondition: Sets the age of the student object
    void setAge(int);

    // description: Sets the hometown of the student
    // return: void
    // precondition: string is valid
    // postcondition: Sets the hometown of the student object
    void setHometown(string);

    // description: Sets the GPA of the student
    // return: void
    // precondition: double is valid
    // postcondition: Sets the GPA of the student object
    void setGPA(double);

    // description: Gets the first name of the student
    // return: string
    // precondition: none
    // postcondition: Returns the first name of the student object
    string getFirstName();

    // description: Gets the last name of the student
    // return: string
    // precondition: none
    // postcondition: Returns the last name of the student
    string getLastName();

    // description: Gets the classification integer of the student
    // return: int
    // precondition: none
    // postcondition: Returns classification integer of the student object
    int getClassInt();

    // description: Gets the classification string of the student
    // return: string
    // precondition: none
    // postcondition: Returns classification string of the student object
    string getClassString();

    // description: Gets the ZIP of the student
    // return: int
    // precondition: none
    // postcondition: Returns the ZIP of the student object
    int getZIP();

    // description: Gets the age of the student
    // return: int
    // precondition: none
    // postcondition: Returns the age of the student object
    int getAge();

    // description: Gets the hometown of the student
    // return: string
    // precondition: none
    // postcondition: Returns the hometown of the student object
    string getHometown();

    // description: Gets the GPA of the student
    // return: double
    // precondition: none
    // postcondition: Returns that GPA of the student object
    double getGPA();

    // description: Displays the student's record
    // return: void
    // precondition: ostream is valid
    // postcondition: Prints the student object's variables
    void display(ostream&);
};

#endif // CLASSFUNCTIONS_H_INCLUDED
