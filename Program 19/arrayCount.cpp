//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 19
//ASSIGNMENT DESCRIPTION:Array Processing
//DUE DATE:10/27/2021
//DATE CREATED:10/24/2021
//DATE LAST MODIFIED:10/24/2021
#include "arrayCount.h"

using namespace std;

int arrayCount(int a[], int s, int v) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(double a[], int s, double v) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(string a[], int s, string v) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(char a[], char v) {
    int count = 0;
    int i = 0;
    while (a[i]) {
        if (a[i] == v) {
            count++;
        }
        i++;
    }
    return count;
}

int arrayCount(vector<int> a, int v) {
    int count = 0;
    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(vector<double> a, double v) {
    int count = 0;
    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(vector<string> a, string v) {
    int count = 0;
    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}

int arrayCount(vector<char> a, char v) {
    int count = 0;
    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            count++;
        }
    }
    return count;
}
