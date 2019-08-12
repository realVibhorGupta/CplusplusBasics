/*
 * fibonacci.cpp
 *
 *  Created on: Jan 22, 2016
 *      Author: vibhor
 */


#include <iostream>


using namespace std;
int main()
{
	int range, first_number = 0, second_number = 1, third_number=0;
	       cout << "Enter Range for Terms of Fibonacci Sequence: ";
	       cin >> range;
	       cout << "Fibonicci Series upto " << range << " Terms "<< endl;
	       for ( int c = 0 ; c < range ; c++ )
	       {
	          if ( c <= 1 )
	             third_number = c;
	          else
	          {
	             third_number = first_number + second_number;
	             first_number = second_number;
	             second_number = third_number;
	          }
	          cout << third_number <<" ";
	       }
	       return 0;
	    }








