//AUTHOR: Xavier Lopez
//ASSIGNMENT TITLE: Program 30
//ASSIGNMENT DESCRIPTION: Closest Pair
//DUE DATE: 12/3/2021
//DATE CREATED: 11/23/2021
//DATE LAST MODIFIED: 11/25/2021

#include "ClosestPair.h"

Pair Closest_Pair(Point P[], int n) {
    Pair x;
    int index1 = 0, index2 = 1;
    double dist1, dist2;

    for (int i = 0; i < n - 1; i++) {

        dist1 = sqrt( pow(P[index1].x - P[index2].x, 2)
                    + pow(P[index1].y - P[index2].y, 2) );

        for (int j = 0; j < n; j++) {
            dist2 = sqrt( pow(P[i].x - P[j].x, 2)
                        + pow(P[i].y - P[j].y, 2) );
            if (i != j) {
                if (dist2 == dist1) {
                    if (((index1 + index2) / 2.0) > ((i + j) / 2.0)) {
                        if (i > j) {
                            index1 = j;
                            index2 = i;
                        }
                        else {
                            index1 = i;
                            index2 = j;
                        }
                    }
                }
                else if (dist2 < dist1) {
                    if (i > j) {
                        index1 = j;
                        index2 = i;
                    }
                    else {
                        index1 = i;
                        index2 = j;
                    }
                }
            }
        }
    }
    x.indexPointOne = index1;
    x.indexPointTwo = index2;
    return x;
}
