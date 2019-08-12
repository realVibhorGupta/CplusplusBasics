/*
 * arrays.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: vibhor
 */

#include <iostream>
using namespace std;

int main() {
    int n[5];
    cout<<"Enter 5 numbers: ";
/*  Storing 5 number entered by user in an array using for loop. */
    for (int i = 0; i < 5; ++i) {
        cin>>n[i];

    }

    cout<<"First number: "<<n[0]<<endl;  // first element of an array is n[0]
    cout<<"Last number: "<<n[4];        // last element of an array is n[SIZE_OF_ARRAY - 1]
    return 0;
}

