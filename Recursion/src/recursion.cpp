/*
 * recursion.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: vibhor
 */

#include<iostream>
using namespace std;
int add(int n);//function prototype
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}
int add(int n)//function declaration
{
    if(n!=0)
     return n+add(n-1);  /* recursive call (method calling)*/
}


