//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 25
//ASSIGNMENT DESCRIPTION:Array of Spheres
//DUE DATE:11/15/2021
//DATE CREATED:11/14/2021
//DATE LAST MODIFIED:11/14/2021

/*
Data Abstraction:
    1 array of Spheres, a, has 100 sphere objects
    3 string variables do the following:
        fileName gets the name of the file from the user
        junk gets the first two lines of the file
        color gets the color of the sphere from the data file
    1 input file stream, inputFile, gets the file from the user
    3 double variables do the following:
        radius gets the radius of the sphere from the data file
        avgArea gets the average area of all the spheres in the array
        redPercent gets the percentage of all spheres in the array that are
        red
    2 integer variables do the following:
        count counts the number of spheres inputted into the array
        volumeCount counts the number of spheres with volumes greater than
        215
Input:
    The program asks the user for a file name
    The program opens the file under the inputted file name
    If the program cannot open the file, an error message is displayed and
        the program prompts for another file name; else, the program
        continues
Process:
    While the program can read a radius and color from the file, the
        following happens:
        The program sets the radius and color of the current sphere count
            in the array with the radius and color read from the file
        If the color of the sphere is red, then the red percentage counter
            increments
        If the volume of the sphere is greater than 215, the volume counter
            increments
        The area of the sphere is added to the average area (becomes the
            sum of the area of all of the spheres)
        The sphere count increments
    Once all the data has been read, the input file is closed
    The red percentage is calculated by dividing the total number of red
        spheres by the total number of spheres and multiplying by 100
    The average area is calculated by dividing the sum of the area of the
        spheres by the total number of spheres
Output:
    The program outputs a list of all the spheres with its radius, color,
        area and volume (with the area and volume shown up to two decimal
        places)
    After the list is printed, the program outputs the total number of
        spheres, the percentage of spheres that were red, the total number
        of spheres with volumes greater than 215, and the average area of
        all the spheres
Assumptions:
    The file has the radius come before the color
    The file has one color and one radius per line
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Sphere.h"

using namespace std;

int main()
{
    //Data Abstraction:
    Sphere a[100];
    string fileName, junk, color;
    ifstream inputFile;
    double radius, avgArea = 0, redPercent = 0;
    int count = 0, volumeCount = 0;

    //Input:
    do {
        cout << "Enter file name: ";
        cin  >> fileName;
        cout << fileName << endl;
        inputFile.open(fileName);
        if (!inputFile) {
            cout << "Error: File Not Open." << endl;
        }
    } while (!inputFile);
    cout << endl;

    //Process:
    getline(inputFile, junk);
    getline(inputFile, junk);
    while (inputFile >> radius >> color) {
        a[count].setRadius(radius);
        a[count].setColor(color);

        if (a[count].getColor() == "red") {
            redPercent++;
        }
        if (a[count].volume() > 215) {
            volumeCount++;
        }

        avgArea += a[count].area();
        count++;
    }
    inputFile.close();

    redPercent = redPercent / count * 100;
    avgArea /= count;

    //Output:
    cout << setw(12) << "Number";
    cout << setw(12) << "Radius";
    cout << setw(12) << "Color";
    cout << setw(12) << "Area";
    cout << setw(12) << "Volume" << endl;
    cout << setprecision(2) << fixed;
    for (int i = 0; i < count; i++) {
        cout << setw(12) << i;
        cout << setw(12) << a[i].getRadius();
        cout << setw(12) << a[i].getColor();
        cout << setw(12) << a[i].area();
        cout << setw(12) << a[i].volume() << endl;
    }
    cout << endl;

    cout << "Total Number of Spheres = " << count << "." << endl;
    cout << redPercent << " % of Spheres are red." << endl;
    cout << volumeCount << " Spheres have a Volume over 215." << endl;
    cout << "Average Area = " << avgArea << endl;

    return 0;
}
