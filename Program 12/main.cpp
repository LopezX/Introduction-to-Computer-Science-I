//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 12
//ASSIGNMENT DESCRIPTION: Class Average
//DUE DATE:10/01/2021
//DATE CREATED:09/30/2021
//DATE LAST MODIFIED:10/01/2021

/*
Data Abstraction:
    * 6 string variables do the following:
        - fileName, gets the name of the file
        - firstName gets the first name of the student
        - lastName gets the last name of the student
        - middleInitial gets the middle initial of 
        the student
        - studentFileName gets the name of the file
        pertaining to a specific student
        - studentName gets the full name of the student
    * 2 input file variables will do the following:
        - inputFile inputs the file from the user to
        the program
        - studentFile inputs the student's file to the
        program
    * 3 integer variables will do the following:
        - classGradeCount counts the total number of
        grades inputed in the class
        - studentGradeCount gets the total number of
        grades inputed for a student
        - grade gets the grade in a student's file
    * 4 double variables will do the following:
        - maxGrade gets the highest grade of the class
        - minGrade gets the lowest grade of the class
        - studentAvg gets the average of the student
        - classAvg gets the average of the class
    * 2 boolean value do the following:
        - firstGrade checks to see if the first grade 
        has been inputted
        - isTitle checks to see if the title for the
        columns were already printed
Input:
    * The user will enter a file name
    * The program will open the file
    * If the file does not open, the program prints an
    error message and exits
    * If file does open, the data is processed
Process:
    * The program will read the student's first name,
    last name, and middle initial from the file
    * The program will find the file pertaining to a
    student and open it
    * Three outcomes can happen with the student file:
        - If the fail file fails to open, then noFile for
        that student is set to true
        - Else, if the file is blank, then noGrades is set
        to true
        - Else, if the file has grades, then the program
        will add the grades to studentAvg, starting at 0
        and resetting back to 0 after each student, and
        classAvg, which starts at 0 but does not reset for
        each student. studentGradeCount, which starts at 0
        for each student, and classGradeCount, which does
        not reset for each new student, will increment for
        each grade. Once all grades are read for the
        student, then studentAvg is divided by
        studentGradeCount. Also, for each grade, the
        program will check to see if it a new maxGrade or
        minGrade, which initially will be the first grade
        read by from the first student file.
    * Once all student files are read, then classAvg
    is divided by classGradeCount
Output:
    * The program will output the student names followed
    by their average grade, then the class average, max
    score and min score
Assumptions:
    * It is assumed the file name is valid
    * It is assumed the grades are integers
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    string fileName, firstName, lastName, middleInitial,
        studentFileName, studentName;
    ifstream inputFile, studentFile;
    int grade, studentGradeCount, classGradeCount = 0;
    double studentAvg, classAvg = 0, maxGrade, minGrade;
    bool firstGrade = false, isTitle = false;
    
    //Input:
    cout << "Enter Name of Data File: ";

    cin >> fileName;
    cout << fileName << endl;

    //Process of Student Averages
    inputFile.open(fileName);

    if (inputFile) {
        while (inputFile >> lastName >> firstName >> middleInitial) {
            studentFileName = firstName + lastName + ".dat";
            studentName = firstName + " "
                        + middleInitial + " "
                        + lastName;
            
            studentFile.open(studentFileName);

            if (studentFile) {
                studentAvg = 0;
                studentGradeCount = 0;
                while (studentFile >> grade) {
                    if (!firstGrade) {
                        maxGrade = grade;
                        minGrade = grade;
                        firstGrade = true;
                    }
                    if (maxGrade < grade) {
                        maxGrade = grade;
                    }
                    if (minGrade > grade) {
                        minGrade = grade;
                    }
                    studentAvg += grade;
                    classAvg += grade;

                    studentGradeCount++;
                    classGradeCount++;
                }
                studentAvg /= studentGradeCount;

                //Output of Student Averages
                if (!isTitle) {
                    cout << endl;
                    cout << setw(25) << left << "Student";
                    cout << "Average" << endl;
                    isTitle = true;
                }

                if (studentGradeCount == 0) {
                    cout << setw(25) << left << studentName;
                    cout << "No Grades" << endl;
                    studentFile.close();
                }
                else {
                    cout << fixed << setprecision(2);
                    cout << setw(25) << left << studentName;
                    cout << studentAvg << endl;
                    studentFile.close();
                }
            }
            else {
                cout << setw(25) << left << studentName;
                cout << "No Data File" << endl;
            }            
        }
        cout << endl;

        //Process of Class Average:
        classAvg /= classGradeCount;
    
        //Output of Average, Max and Min Score:
        cout << "Class Average: " << classAvg << endl;
        cout << "Max Score: " << maxGrade << endl;
        cout << "Min Score: " << minGrade << endl;
        
        inputFile.close();
    }
    else {
        cout << "ERROR: File Not Open.";
    }

    return 0;
}
