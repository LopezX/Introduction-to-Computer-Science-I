//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 29
//ASSIGNMENT DESCRIPTION: Time Class
//DUE DATE: 12/1/2021
//DATE CREATED: 11/22/2021
//DATE LAST MODIFIED: 11/23/2021

/*
Data Abstraction:
    1 Student array, s, holds 100 student objects
    1 input file stream, inputFile, gets the file from the user
    6 string variables do the following:
        firstName gets the first name of the student record
        lastName gets the last name of the student record
        classification gets the class of the student record
        hometown gets the hometown of the student record
        dataStr gets the data line from the file
        junk gets the first line of the file
    3 integer variables do the following:
        zip gets the ZIP of the student record
        age gets the age of the student record
        count keeps tracks of how many student records are read from the file,
            starting at 0
    1 double variable, gpa, gets the GPA of the student record
    1 stringstream variable, inSS, gets the data from the data string
Input:
    The program opens a file under the name "stDATA.txt"
Process:
    The program gets the first line of the file
    While the program can get the data from the file:
        - The stringstream is cleared and holds an empty string
        - The stringstream receives a line of data
        - The first name, last name, classification, ZIP, age, hometown and
            GPA are read from the stringstream
        - The first name, last name, classification, ZIP, age, hometown and
            GPA are set into the current student record of the Student array
        - The count of student records read from the file increments
    The input file is closed
    The program sorts the Student array by first name, last name,
        classification and GPA, respectively
Output:
    The titles of each column is printed to the screen
    For the number of student records read, the program prints each student
        record once, and if a duplicate record is found, the program prints
        that there may have been a duplicate record
Assumptions:
    It is assumed that there are at most 100 student records in a file
    It is assumed that the record is formatted by first name, last name,
        classification, ZIP, age, hometown and GPA
*/

#include "classFunctions.h"
#include <fstream>
#include <sstream>

using namespace std;

const int SIZE = 100;

// description: Sorts students by first names
// return: void
// precondition: Student array and int are valid
// postcondition: Sorts student object array by first names
void classSortByFirstName (Student [], int);

// description: Sorts students by last names
// return: void
// precondition: Student array and int are valid
// postcondition: Sorts student object array by last names
void classSortByLastName (Student [], int);

// description: Sorts students by classifications
// return: void
// precondition: Student array and int are valid
// postcondition: Sorts student object array by classifications
void classSortByClassification(Student [], int);

// description: Sorts students by GPA
// return: void
// precondition: Student array and int are valid
// postcondition: Sorts student object array by GPA
void classSortByGPA (Student [], int);

// description:
// return: bool
// precondition:
// postcondition: Returns whether two student records are the same
bool duplicateRecord(Student, Student);

int main()
{
    //Data Abstraction:
    Student s[SIZE];
    ifstream inputFile;
    string firstName, lastName, classification, hometown;
    string dataStr, junk;
    int zip, age, count = 0;
    double gpa;
    stringstream inSS;

    //Input:
    inputFile.open("stDATA.txt");

    //Process:
    getline(inputFile, junk);
    while (getline(inputFile, dataStr)) {
        inSS.clear();
        inSS.str("");
        inSS << dataStr;

        inSS >> firstName;
        inSS >> lastName;
        inSS >> classification;
        inSS >> zip;
        inSS >> age;
        inSS >> hometown;
        inSS >> gpa;

        s[count].setFirstName(firstName);
        s[count].setLastName(lastName);
        s[count].setClassification(classification);
        s[count].setZIP(zip);
        s[count].setAge(age);
        s[count].setHometown(hometown);
        s[count].setGPA(gpa);

        count++;
    }
    inputFile.close();

    classSortByFirstName(s, count);
    classSortByLastName(s, count);
    classSortByClassification(s, count);
    classSortByGPA(s, count);

    //Output:
    cout << setw(16) << left << "First Name";
    cout << setw(16) << left << "Last Name";
    cout << setw(8)  << left << "Class";
    cout << setw(8)  << left << "Zip";
    cout << setw(8)  << left << "Age";
    cout << setw(24) << left << "Hometown";
    cout << setw(5)  << left << "GPA";
    cout << endl;

    for (int i = 0; i < count; i++) {
        if (i > 0 && duplicateRecord(s[i], s[i - 1])) {
            cout << "I THINK THIS IS A DUPLICATE RECORD" << endl;
        }
        else {
            s[i].display(cout);
        }
    }

    return 0;
}

void classSortByFirstName (Student s[], int n) {
    int hole;
    Student value;
    for (int i = 1; i < n; i++) {
        hole = i;
        value = s[hole];
        while (hole > 0 && value.getFirstName() < s[hole - 1].getFirstName()) {
            s[hole] = s[hole - 1];
            hole--;
        }
        s[hole] = value;
    }
}

void classSortByLastName (Student s[], int n) {
    int hole;
    Student value;
    for (int i = 1; i < n; i++) {
        hole = i;
        value = s[hole];
        while (hole > 0 && value.getLastName() < s[hole - 1].getLastName()) {
            s[hole] = s[hole - 1];
            hole--;
        }
        s[hole] = value;
    }
}

void classSortByClassification (Student s[], int n) {
    int hole;
    Student value;
    for (int i = 1; i < n; i++) {
        hole = i;
        value = s[hole];
        while (hole > 0 && value.getClassInt() < s[hole - 1].getClassInt()) {
            s[hole] = s[hole - 1];
            hole--;
        }
        s[hole] = value;
    }
}

void classSortByGPA (Student s[], int n) {
    int hole;
    Student value;
    for (int i = 1; i < n; i++) {
        hole = i;
        value = s[hole];
        while (hole > 0 && value.getGPA() < s[hole - 1].getGPA()) {
            s[hole] = s[hole - 1];
            hole--;
        }
        s[hole] = value;
    }
}

bool duplicateRecord (Student s1, Student s2) {
    bool dupe = false;
    if (s1.getFirstName() == s2.getFirstName()) {
        if (s1.getLastName() == s2.getLastName()) {
            if (s1.getClassInt() == s2.getClassInt()) {
                if (s1.getGPA() == s2.getGPA()) {
                    dupe = true;
                }
            }
        }
    }
    return dupe;
}
