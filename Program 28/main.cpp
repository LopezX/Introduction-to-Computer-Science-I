//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 28
//ASSIGNMENT DESCRIPTION:Time Class
//DUE DATE:11/29/2021
//DATE CREATED:11/22/2021
//DATE LAST MODIFIED:11/22/2021

/*
Data Abstraction:
    1 time object array, t, will hold 100 time objects
    1 stringstream variable, inSS, will get a line
        from the data file through a string
    2 string variables do the following:
      - dataStr gets a line from the data file
      - junkStr gets the first line from the data file
    1 input file stream variable, inputFile, will open
        a data file
    1 integer variable, count, keeps track of how many
        time objects that are read
Input:
    The program opens an input file under the name
        "timeData.txt"
    If the program cannot open the file, the program
        prints an error message and exits; else, the
        program proceeds to the process
Process:
    The program gets the first line and ignores it
    While the program can read out of the data file,
        the program changes the current time object's
        hour, minutes and seconds, respectively
    Once all of the time objects have been read from the
        data file, the program sorts the time object
        array from shortest time to longest
Output:
    The program prints the time object array to the screen
Assumptions:
    The data file only has 3 variables
    The data file is separated by white space
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Time {
    int hour;
    int min;
    double sec;

    // description: Prints the times to the screen
    // return: void
    // precondition: ostream is valid
    // postcondition: The times are displayed to the output screen
    void display(ostream&) const;
};

// description: Sorts the times by seconds
// return: void
// precondition: time array and int are valid
// postcondition: Time array is sorted by seconds (least to greatest)
void sortBySeconds(Time [], int);

// description: Sorts the times by minutes
// return: void
// precondition: time array and int are valid
// postcondition: Time array is sorted by minutes (least to greatest)
void sortByMinutes(Time [], int);

// description: Sorts the times by hours
// return: void
// precondition: time array and int are valid
// postcondition: Time array is sorted by hours (least to greatest)
void sortByHours(Time [], int);

const int SIZE = 100;

int main()
{
    //Data Abstraction:
    Time t[SIZE];
    stringstream inSS;
    string dataStr, junkStr;
    ifstream inputFile;
    int count = 0;

    //Input:
    inputFile.open("timeData.txt");

    if (!inputFile) {
        cout << "Data File Failed To Open." << endl;
    }
    else {
        //Process:
        getline(inputFile, junkStr);
        while (getline(inputFile, dataStr)) {
            inSS.clear();
            inSS.str("");
            inSS << dataStr;

            inSS >> t[count].hour;
            inSS >> t[count].min;
            inSS >> t[count].sec;
            count++;
        }
        inputFile.close();

        sortBySeconds(t, count);
        sortByMinutes(t, count);
        sortByHours(t, count);

        //Output:
        for (int i = 0; i < count; i++) {
            t[i].display(cout);
        }
    }

    return 0;
}

void Time::display(ostream& s) const {
    s << setw(2) << setfill('0') << hour << ":";
    s << setw(2) << setfill('0') << min << ":";
    s << setw(2) << setfill('0') << sec << endl;
}

void sortBySeconds(Time a[], int n) {
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j].sec > a[j+1].sec){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void sortByMinutes(Time a[], int n) {
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j].min > a[j+1].min){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void sortByHours(Time a[], int n) {
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j].hour > a[j+1].hour){
                swap(a[j], a[j+1]);
            }
        }
    }
}
