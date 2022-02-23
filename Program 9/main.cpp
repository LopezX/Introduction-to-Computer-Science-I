//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 9
//ASSIGNMENT DESCRIPTION: Min Max Sum Count Average
//                          (using file)
//DUE DATE:09/22/2021
//DATE CREATED:09/17/2021
//DATE LAST MODIFIED:09/17/2021

/*
 * Data Abstraction:
 *     1 string variable, fileName, will get the name of 
 *         of the file
 *     1 input file variable, inputFile, will input the 
 *         file into the program
 *     5 integer variables, min, max, num, sum and count,
 *         will do the following:
 *         - min holds the minimum value of the data
 *         - max holds the maximum value of the data
 *         - num is the input read from the file
 *         - sum is the sum of the data
 *         - count counts the number of inputs from the
 *               file
 *     1 double variable, average, holds the average of 
 *         the data
 * Input:
 *     The program prompts the user to input a file name
 *     The program attempts to open the file under the
 *         file name. If there is no valid file under the
 *         file name inputted, then an error message is 
 *         displayed and the user is again prompted to 
 *         input a file name
 * Process:
 *     Once the program opens the file, the program reads 
 *         the data 
 *     For each data input that is read into num, num is
 *         is added into sum
 * 	   count is increased by one for each data input read
 *     If count equals 1, meaning that this is the first 
 *         input of num, then max and min equal num
 *     As more data is read, if num is greater than max, 
 *         then max equals num, and if num is less than min,
 *         min equals num
 *     Once all data is read, the file is closed
 *     The average is computed by dividing sum by count
 * Output:
 *     While userGuess is not true, the program will tell 
 *         the user if their guess is too low or too high 
 *         and ask for a new number
 *     Once the user guesses correctGuess, the program will 
 *         the user their guess was correct and it took them
 *         (countGuesses) to guess the number.
 * Assumptions:
 *     It is assumed the user inputs a valid file name
 *     It is assumed their are no characters or strings in 
 *         the inputted file
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string fileName;
    ifstream inputFile;
    int min, max, num, count = 0, sum = 0;
    double average;

    //Input:
    do {
        cout << "Enter Data File Name: ";

        cin >> fileName;
        cout << fileName << endl;
        
        inputFile.open(fileName);

        if (!inputFile) {
            cout << "Error: File Not Open." << endl;
        }
    } while (!inputFile);
    
    cout << endl;

    //Process
    while (inputFile >> num) {
        sum += num;
        count ++;

        if (count == 1){
            min = max = num; 
        }

        if(max < num) {
            max = num;
        }

        if (min > num) {
            min = num;
        }
    }
    average = static_cast<double>(sum) / count;
    inputFile.close();

    //Output
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;

    return 0;
}