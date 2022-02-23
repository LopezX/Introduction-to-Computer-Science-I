//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 8
//ASSIGNMENT DESCRIPTION:Guessing Game
//DUE DATE:09/17/2021
//DATE CREATED:09/16/2021
//DATE LAST MODIFIED:09/16/2021

/*
 * Data Abstraction:
 *     3 integer variables, rangeLimit1, rangeLimit2,  
 *         and range, are used to get the range's limits 
 *         and the range itself
 *     1 integer variable, temp, will assist with sorting
 *         rangeLimit1 and rangeLimit2
 *     1 integer variable, correctGuess, holds the value
 *         of the correct number to guess
 *     1 integer value, userGuess, gets the user's guess
 *     1 integer value, countGuesses, counts the number
 *         of guesses from the user
 * Input:
 *     The program prompts the user to input two integers
 * 	   The program receives the user's input of 2 integers
 *         amd stores it to range1 and range2
 * Process:
 *     The program first sorts rangeLimit1 and rangeLimit2 
 *         from greatest to least, with rangeLimit1 being 
 *         the least and rangeLimit2 the greatest
 * 	   The program creates the range by subtracting 
 *         rangeLimit1 from rangeLimit2 and adding 1
 *     The program creates a value to store in correctGuess
 *         by finding a random number in the range and 
 *         adding rangeLimit1 to the random number found
 *     The program asks the user to guess a number (userGuess)  
 *         between rangeLimit1 and rangeLimit2
 *     For each guess, countGuesses keeps track of the number
 *         of guesses the user makes
 * Output:
 *     While userGuess is not true, the program will tell 
 *         the user if their guess is too low or too high 
 *         and ask for a new number
 *     Once the user guesses correctGuess, the program will 
 *         the user their guess was correct and it took them
 *         (countGuesses) to guess the number.
 * Assumptions:
 *     It is assumed the user inputs an integer
 */
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    //Data Abstraction:
    int rangeLimit1, rangeLimit2;
    int temp;
    int range;
    int correctGuess, userGuess;
    int countGuesses;
    srand(time(0));

    //Input:
    cout << "Please enter 2 integers: ";

    cin >> rangeLimit1 >> rangeLimit2;
    cout << rangeLimit1 << " " << rangeLimit2 << endl << endl;

    //Process:
    if (rangeLimit1 > rangeLimit2) {
        temp = rangeLimit1;
        rangeLimit1 = rangeLimit2;
        rangeLimit2 = temp;
    }

    range = (rangeLimit2 - rangeLimit1) + 1;
    countGuesses = 0;

    correctGuess = (rand() % range) + rangeLimit1;

    //Output:
    cout << "I'm thinking of a number between " <<
         rangeLimit1 << " and " << rangeLimit2 << "." << endl << endl;

    do {
        cout << "Enter guess: ";

        cin >> userGuess;
        cout << userGuess;

        if (userGuess < correctGuess) {
            cout << " - Too Low" << endl << endl;
        }
        else if (userGuess > correctGuess) {
            cout << " - Too High" << endl << endl;
        }

        countGuesses++;

    } while (userGuess != correctGuess);

    cout << endl << endl;

    cout << "Correct, it took you " << countGuesses <<
         " tries to guess my number.";

    return 0;
}