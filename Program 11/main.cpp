//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 11
//ASSIGNMENT DESCRIPTION: GPS
//DUE DATE:09/29/2021
//DATE CREATED:09/28/2021
//DATE LAST MODIFIED:09/29/2021

/*
Data Abstraction:
 * 3 string variables, fileName and command, to do
 the following:
   - fileName gets the name of the file
   - command gets the command from the file data
 * 1 input file variable, inputFile, to establish 
 an input file stream
 * 12 double variables are created to do the 
 following:
   - currX and currY get the current X and Y 
   coordinates from the data
   - prevX and prevY get the previous X and Y
   coordinates from the data
   - startX and startY get the starting X and Y
   - stopX and stopY get the stopping X and Y
   - totalDist gets the sum of the distance traveled 
   from the start to stop
   - finalDistStart gets the distance from the 
   stopping coordinates to the starting
   - totalDistStart gets the distance from start
   - avgDistStart gets the average of the distance
   from each data coordinates to the start
 * 1 integer variable, count, counts how many data
 points are read
 * 2 boolean variables, tripStarted and tripStopped,
 do the following:
   - tripStarted is false unless the command is 
   "START"; therefore, no data is recorded until the
   first "START" command appears
   - tripStopped checks when command is "STOP", and 
   will keep taking data points until "STOP" appears
Input:
 * The user will enter a file name
 * The program will open the file
 * If the file does not open, the program prints an
 error message and asks for file name
 * If file does open, the data is processed
Process:
 * The program will skip the first two lines of the 
 file
 * While tripStopped is false, the program will do 
 the following:
   - The program will read the command, currX and
   currY
   - If command is "START" and tripStarted is false,
   the program records currX to startX and currY to
   startY, and currX to prevX and currY to prevY, and
   makes tripStarted equal true
   - Else, if tripStarted equals true, the program
   calculates totalDist and totalDistStart and then
   records currX to prevX and currY to prevY. Then,
   the program checks to see if the command is "STOP",
   and if it true, it records currX to stopX and currY
   to stopY and makes tripStopped equal true.
 * After the loop is finished, the program calculates
 finalDistStart and avgDistStart
Output:
 * The program will output the final location, 
 total distance traveled, distance to starting
 point and average distance to start point
Assumptions:
 * It is assumed the file holds data in the program
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    //Data Abstraction:
    string fileName, command, junk;
    ifstream inputFile;
    double currX, currY;
    double prevX, prevY;
    double startX, startY;
    double stopX, stopY;
    double finalDistStart, avgDistStart;
    double totalDist = 0.0, totalDistStart = 0.0;
    int count = 0;
    bool tripStarted = false, tripStopped = false;

    //Input:
    do {
        cout << "Please Enter The Name Of The Data File: ";
        cin >> fileName;
        cout << fileName << endl;
        inputFile.open(fileName);
        if (!inputFile) {
            cout << "Error: File failed to open." << endl;
        }
    } while (!inputFile);
    cout << endl;

    //Process:
    getline(inputFile, junk);
    getline(inputFile, junk);

    while (!tripStopped) {
        inputFile >> command >> currX >> currY;
        if (command == "START" && !tripStarted) {
            startX = currX;
            startY = currY;

            prevX = currX;
            prevY = currY;

            tripStarted = true;
        }
        else if (tripStarted) {
            totalDist += sqrt( pow( (prevX - currX) , 2.0) 
                + pow( (prevY - currY) , 2.0) );

            totalDistStart += sqrt( pow( (startX - currX) , 2.0) 
                + pow( (startY - currY) , 2.0) );

            prevX = currX;
            prevY = currY;

            count++;

            if (command == "STOP") {
                stopX = currX;
                stopY = currY;

                tripStopped = true;
            }
        }
    }

    finalDistStart = sqrt( pow(startX - stopX, 2.0) 
        + pow(startY - stopY, 2.0) );
    
    avgDistStart = totalDistStart / count;

    inputFile.close();

    //Output:
    cout << fixed << setprecision(1);
    cout << "Final Location: (";
    cout << stopX << ", " << stopY << ")" << endl;

    cout << "Total distance traveled ";
    cout << totalDist << endl;

    cout << "Distance to starting point ";
    cout << finalDistStart << endl;

    cout << "Average distance to start point = ";
    cout << avgDistStart << endl;

    return 0;
}
