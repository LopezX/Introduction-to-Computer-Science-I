//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 29
//ASSIGNMENT DESCRIPTION: Time Class
//DUE DATE: 12/1/2021
//DATE CREATED: 11/22/2021
//DATE LAST MODIFIED: 11/23/2021

#include "classFunctions.h"

void Student::setFirstName(string f) {
    firstName = f;
}

void Student::setLastName(string l) {
    lastName = l;
}

void Student::setClassification(string c) {
    int classInt;
    if (c == "FR") {
        classInt = 0;
    }
    else if (c == "SO") {
        classInt = 1;
    }
    else if (c == "JR") {
        classInt = 2;
    }
    else {
        classInt = 3;
    }
    classification = classInt;
}

void Student::setZIP(int z) {
    zip = z;
}

void Student::setAge(int a) {
    age = a;
}

void Student::setHometown(string h) {
    hometown = h;
}

void Student::setGPA(double g) {
    gpa = g;
}


string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getClassString() {
    string year;
    if (classification == 0) {
        year = "FR";
    }
    else if (classification == 1) {
        year = "SO";
    }
    else if (classification == 2) {
        year = "JR";
    }
    else {
        year = "SR";
    }
    return year;
}

int Student::getClassInt() {
    return classification;
}

int Student::getZIP() {
    return zip;
}

int Student::getAge() {
    return age;
}

string Student::getHometown() {
    return hometown;
}

double Student::getGPA() {
    return gpa;
}


void Student::display(ostream& s) {
    s << setw(16) << left << firstName;
    s << setw(16) << left << lastName;
    s << setw(8)  << left << getClassString();
    s << setw(8)  << left << zip;
    s << setw(8)  << left << age;
    s << setw(24) << left << hometown;
    s << setw(5)  << left << fixed << setprecision(2) << gpa;
    s << endl;
}
