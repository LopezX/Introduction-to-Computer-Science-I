//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 10
//ASSIGNMENT DESCRIPTION: CaesarCipher
//DUE DATE:09/24/2021
//DATE CREATED:09/24/2021
//DATE LAST MODIFIED:09/24/2021

/*
 * Data Abstraction:
 *     1 string variable, fileName, will get the name of 
 *         of the file
 *     1 string variable, command, will get the command
 *         from the user to decrypt or encrypt
 *     1 input file variable, inputFile, will input the 
 *         file into the program
 *     1 output file variable, message, will output the 
 *         text to a file named "message"
 *     1 integer variables, shift, will shift the letters 
 *         by 3
 *     1 integer array, countVowels, will have 6 storage 
 *         slots (all set to 0) to count how many times 
 *         each vowel (a, e, i, o, u, y) is seen
 *     1 character variable, c, will get each character 
 *         from the input file
 *     1 character array, vowels, is used to output the
 *         corresponding vowel to its frequency
 *     2 boolean value, badInput and badCommand, will be
 *         used to see if the input from the user is bad
 *         (badInput) or if the command is bad (badCommand)
 * Input:
 *     The program prompts the user to input a file name
 *     The program asks the user for a command to either
 *         decrypt or encrypt the text in the file
 *     The file under the file name is opened
 *     If the command given does not match "encrypt" or 
 *         "decrypt", badCommand and badInput is set to 
 *         true
 *     If the program cannot open the file badInput
 *          is set to true
 * Process:
 *     If badInput is not true, the data is processed
 *     If command is "decrypt", then shift = -3
 * 	   While the program gets a character from the file:
 *         - The program checks to see if it is a vowel;
 *         if so, the count for that vowel in countVowels
 *         increases by one
 *         - The program shifts the character by shift
 *         - The program outputs the new character to the
 *         screen
 *         - The program outputs the new character to 
 *         "message"
 * Output:
 *     If badInput is true, the program checks to see if
 *         badCommand is true, and if so outputs "Error: 
 *         Bad Command."; afterwards, the program outputs 
 *         "Error: File did NOT open." and stops.
 *     If badInput is not true, the program outputs the 
 *         letter frequency of the inputFile and stops
 * Assumptions:
 *     It is assumed the user inputs a valid file name
 *     It is assumed the user inputs a valid command
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    int shift = 3;
    int countVowels[6] = {0, 0, 0, 0, 0, 0};
    char c;
    char vowels[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    string fileName, command;
    ifstream inputFile;
    ofstream outputFile;
    bool badInput = false, badCommand = false;

    //Input:
    cout << "Enter File Name: ";
    cin >> fileName;
    cout << fileName << endl;

    cout << "Enter encrypt or decrypt: ";
    cin >> command;
    cout << command << endl;

    inputFile.open(fileName);

    if (command != "decrypt" && command != "encrypt") {
        badInput = true;
        badCommand = true;
    }
    else if (!inputFile) {
        badInput = true;
    }
    else {
        cout << endl;
    }

    //Process:
    if (!badInput) {
        
        if (command == "decrypt") {
            shift = -3;
        }

        outputFile.open("message");

        while (inputFile.get(c)) {
            if (c == 'a' || c == 'A') {
                countVowels[0]++;
            }
            else if (c == 'e' || c == 'E') {
                countVowels[1]++;
            }
            else if (c == 'i' || c == 'I') {
                countVowels[2]++;
            }
            else if (c == 'o' || c == 'O') {
                countVowels[3]++;
            }
            else if (c == 'u' || c == 'U') {
                countVowels[4]++;
            }
            else if (c == 'y' || c == 'Y') {
                countVowels[5]++;
            }

            c = c + shift;
            outputFile << c;

            //Output:            
            cout << c;            
        }

        outputFile.close();
        inputFile.close();

        cout << endl << endl;
        cout << "Letter Frequency" << endl;

        for (int i = 0; i < 6; ++i) {
            cout << "   ";
            cout << vowels[i];
            cout << setw(7) << right << countVowels[i] << endl;
        }        
    }
    else {
        if (badCommand) {
            cout << "Error: Bad Command." << endl;
        }
        cout << "Error: File did NOT open." << endl;
    }    

    return 0;
}
