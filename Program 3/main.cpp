//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program3
//ASSIGNMENT DESCRIPTION:Approximate PI
//DUE DATE:09/01/2021
//DATE CREATED:08/26/2021
//DATE LAST MODIFIED:09/07/2021
#include <iostream>

using namespace std;

int main()
{
    /*Declare PI1 as a floating-point
    with the first approximation*/
    double PI1 = 4.0 * (1.0 - (1.0 / 3.0) + (1.0 / 5.0)
                        - (1.0 / 7.0) + (1.0 / 9.0)
                        - (1.0 / 11.0));

    /*Declare PI2 as a floating-point
    with the first approximation*/
    double PI2 = 4.0 * (1.0 - (1.0 / 3.0) + (1.0 / 5.0)
                        - (1.0 / 7.0) + (1.0 / 9.0)
                        - (1.0 / 11.0) + (1.0 / 13.0));

    cout << "PI = " << PI1 << endl;
    cout << "PI = " << PI2 << endl;

    return 0;
}
