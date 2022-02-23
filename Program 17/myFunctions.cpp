//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 17
//ASSIGNMENT DESCRIPTION:myFunctions
//DUE DATE:10/20/2021
//DATE CREATED:10/18/2021
//DATE LAST MODIFIED:10/19/2021
#include "myFunctions.h"

int max (int x, int y) {
    if (x < y) {
        x = y;
    }
    return x;
}

double max (double x, double y) {
    if (x < y) {
        x = y;
    }
    return x;
}

int max (int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

double max (double a[], int n) {
    double max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}



int min (int x, int y) {
    if (x > y) {
        x = y;
    }
    return x;
}

double min (double x, double y) {
    if (x > y) {
        x = y;
    }
    return x;
}

int min (int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

double min (double a[], int n) {
    double min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}



int absoluteValue (int x) {
    if (x < 0) {
        x *= -1;
    }
    return x;
}

double absoluteValue (double x) {
    if (x < 0) {
        x *= -1;
    }
    return x;
}



double factorial (int x) {
    double fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact;
}

double combination (int x, int y) {
    double comb;
    comb = factorial(x) / (factorial(y) * factorial(x - y));
    return comb;
}

double permutation(int x, int y) {
    double perm;
    perm = factorial(x) / factorial(x - y);
    return perm;
}