//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 27
//ASSIGNMENT DESCRIPTION:Mixed Data Input
//DUE DATE:11/19/2021
//DATE CREATED:11/18/2021
//DATE LAST MODIFIED:11/18/2021

/*
Data Abstraction:
    4 string variables do the following:
        fileName gets the name of the file from the user
        firstLine gets the first line from the input file
        secondLine gets the second line from the input file
        data gets the data lines after the second line from
            the input file
    1 input file stream, inputFile, gets the file from the
        user
    3 output file streams do the following:
        fileA creates an output file titled "Company_A.txt"
        fileB creates an output file titled "Company_B.txt"
        fileC creates an output file titled "Company_C.txt"
    1 stringstream variable, ss, gets the data string to
        read out the account number of the data line
    1 integer variable, accountNum, gets the account number
        of a data line
Input:
    The program asks the user for a file name
    The program opens the file under the file name
      - If the file doesn't open, then the program displays
          an error message and asks the user again
Process:
    Once a file is opened, the first two lines of the file
        are read and stored
    3 output files are created, titles "Company_A.txt",
        "Company_B.txt", and "Company_C.txt"
    The first two lines of the input file that were read are
        outputted to all output files
    While the program reads data from the file:
        The data line read gets inputted into a stringstream
        The first integer of the stringstream is read and
            determines where the data line is outputted to:
Output:
              - If the integer is greater than or equal to
                  0 but less than 100, the data line is
                  outputted to the output file titled
                  "Company_A.txt"
              - If the integer is greater than or equal to
                  300 but less than 400, the data line is
                  outputted to the output file titled
                  "Company_B.txt"
              - If the integer is greater than or equal to
                  200 but less than 300, the data line is
                  outputted to the output file titled
                  "Company_C.txt"
Assumptions:
    It is assumed the data lines always start with the
        account number
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    //Data Abstraction:
    string fileName, firstLine, secondLine, data;
    ifstream inputFile;
    ofstream fileA, fileB, fileC;
    stringstream ss;
    int accountNum;

    //Input:
    do {
        cout << "Enter Name of Data File: ";
        cin >> fileName;
        cout << fileName << endl;

        inputFile.open(fileName);
        if (!inputFile) {
            cout << "Error: File Not Open." << endl;
        }
    } while(!inputFile);

    //Process:

    getline(inputFile, firstLine);
    getline(inputFile, secondLine);

    fileA.open("Company_A.txt");
    fileB.open("Company_B.txt");
    fileC.open("Company_C.txt");

    fileA << firstLine << endl << secondLine << endl;
    fileB << firstLine << endl << secondLine << endl;
    fileC << firstLine << endl << secondLine << endl;

    while (getline(inputFile, data)) {
        ss.clear();
        ss.str("");
        ss << data;
        ss >> accountNum;

        //Output:
        if (0 <= accountNum && accountNum < 100) {
            fileA << data << endl;
        }
        else if (300 <= accountNum && accountNum < 400) {
            fileB << data << endl;
        }
        else if (200 <= accountNum && accountNum < 300) {
            fileC << data << endl;
        }
    }

    inputFile.close();
    fileA.close();
    fileB.close();
    fileC.close();

    return 0;
}
