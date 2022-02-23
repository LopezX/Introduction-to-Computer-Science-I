//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 14
//ASSIGNMENT DESCRIPTION: Array Backwards
//DUE DATE:10/08/2021
//DATE CREATED:10/05/2021
//DATE LAST MODIFIED:10/06/2021

/*
Data Abstraction:
    * 1 integer array, numbers, holds 25 spots for
    the input of integers
    * 5 integer variables do the following:
        - numElements gets the number of elements the
        user will input into the array
        - sum gets the sum of the integers
        - max gets the maximum integer
        - min gets the minimum integer
        - dupCount tracks how many duplicate 
        integers are found
    * 1 integer vector, dupList, keeps track of what 
    integers have already been counted as a duplicate
    * 1 boolean value, onList, checks to see if an 
    integer is on the duplicate list
Input:
    * The program asks the user how many elements they
    want to store in the array
    * The program will ask the user to store an integer
    in each element for however many elements they want
    to store
Process:
    * The program will do the following to each integer:
        - If the integer is the first element of the 
        array, that integer is the initial max and min
        - The integer is added to the sum
        - The integer is checked to see if it is a new
        max or if it is a new min
        - The integer is checked with other elements in
        the array to see if there are duplicates of that
        integer; if so, the duplicate count is 
        incremented by 1 and that integer is stored in
        the vector of duplicate integers so that the 
        program does not count a duplicate number 
        multiple times
Output:
    * The program will output the elements of the array
    as they were entered in (beginning of array to end)
    * The program will output the elements of the array
    backwards (end of array to beginning)
    * The program will output the sum, number of 
    duplicates found, and the max and min
Assumptions:
    * It is assumed the inputs are integers
    * It is assumed the number of inputs in the array 
    does not exceed 25 elements
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Data Abstraction:
    int numbers[25];
    int numElements, max, min;
    int sum = 0, dupCount = 0;
    vector<int> dupList(0);
    bool onList;

    //Input:
    cout << "Input the number of elements to store in the array: ";
    cin >> numElements;
    cout << numElements << endl;

    cout << "Input " << numElements << " integers:" << endl;
    for (int i = 0; i < numElements; i++) {
        cout << "integer - " << i << " : ";
        cin >> numbers[i];
        cout << numbers[i] << endl;
    }

    //Process:
    for (int i = 0; i < numElements; i++) {
        if (i == 0) {
            max = numbers[i];
            min = numbers[i];
        }

        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }

        for (int j = i + 1; j < numElements; j++) {
            if (numbers[i] == numbers[j]) {
                onList = false;
                for (unsigned int k = 0; k < dupList.size(); k++) {
                    if (dupList.at(k) == numbers[i]) {
                        onList = true;
                    }
                }
                if (!onList) {
                    dupList.push_back(numbers[i]);
                    dupCount++;
                }
            }
        }

        sum += numbers[i];
    }

    //Output:
    cout << endl << endl;
    cout << "The values stored into the array are :" << endl;
    for (int i = 0; i < numElements; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "The values stored into the array in reverse are :" << endl;
    for (int i = numElements - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "The sum of all elements of the array is ";
    cout << sum << endl;

    cout << "The total number of duplicate elements in the array is ";
    cout << dupCount << endl;

    cout << "The maximum and minimum element in the array are ";
    cout << max << " , " << min << endl;

    return 0;
}
