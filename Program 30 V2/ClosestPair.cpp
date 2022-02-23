//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 30
//ASSIGNMENT DESCRIPTION: Closest Pair
//DUE DATE: 12/3/2021
//DATE CREATED: 11/23/2021
//DATE LAST MODIFIED: 12/3/2021

#include "ClosestPair.h"

Pair Closest_Pair(Point P[], int n) {
    Pair x;
    int index1 = 0, index2 = 1;
    double dist1, dist2;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            dist1 = sqrt( pow(P[index1].x - P[index2].x, 2)
                    + pow(P[index1].y - P[index2].y, 2) );

            dist2 = sqrt( pow(P[i].x - P[i + j].x, 2)
                        + pow(P[i].y - P[i + j].y, 2) );

            if (dist2 == dist1) {
                if ( ((index1 + index2) / 2.0) > ((i + i + j) / 2.0) ) {
                    index1 = i;
                    index2 = i + j;
                }
            }
            else if (dist2 < dist1) {
                index1 = i;
                index2 = i + j;
            }
        }
    }
    x.indexPointOne = index1;
    x.indexPointTwo = index2;
    return x;
}
