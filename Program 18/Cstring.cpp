//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 18
//ASSIGNMENT DESCRIPTION:myFunctions
//DUE DATE:10/21/2021
//DATE CREATED:10/20/2021
//DATE LAST MODIFIED:10/20/2021
#include "Cstring.h"

int Strlen(const char s1[]) {
    int i = 0;
    while (s1[i]) {
        i++;
    }
    return i;
}

void Strcpy(char s1[], const char s2[]) {
    int s2Length = Strlen(s2);
    int i;
    for (i = 0; i <= s2Length; i++) {
        if (i == s2Length) {
            s1[i] = '\0';
        }
        else {
            s1[i] = s2[i];
        }
    }
}

int Strcmp(const char s1[], const char s2[]) {
    int s1Length = Strlen(s1);
    int pass = 0;
    bool sameChar = true;
    int i = 0;

    while (sameChar && i < s1Length) {
        if (s1[i] > s2[i]) {
            pass = 1;
            sameChar = false;
        }
        else if (s1[i] < s2[i]) {
            pass = -1;
            sameChar = false;
        }
        i++;
    }

    return pass;
}

void Strcat(char s1[], const char s2[]) {
    int s1Length = Strlen(s1);
    int s2Length = Strlen(s2);
    for (int i = 0; i <= s2Length; i++){
        if (i == s2Length) {
            s1[s1Length + i] = '\0';
        }
        else {
            s1[s1Length + i] = s2[i];
        }
    }
}