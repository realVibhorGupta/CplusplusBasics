/*
 * armstrong.cpp
 *
 *  Created on: Jan 31, 2016
 *      Author: vibhor
 */
#include <iostream>
using namespace std;
int main()
{
    int number, temp, digit1, digit2, digit3,inputNumber;

    cout<<"Enter thye series upper limt";
    cin>>inputNumber;
    number = 001;
    while (number <= inputNumber)
    {
        digit1 = number - ((number / 10) * 10);
        digit2 = (number / 10) - ((number / 100) * 10);
        digit3 = (number / 100) - ((number / 1000) * 10);
        temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
        if (temp == number)
        {
            cout<<"\n Armstrong no is:"<< temp;
        }
        number++;
    }
}



