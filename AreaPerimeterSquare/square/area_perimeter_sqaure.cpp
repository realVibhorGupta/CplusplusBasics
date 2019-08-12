/*
 * area_perimeter_sqaure.cpp
 *
 *  Created on: Jan 20, 2016
 *      Author: vibhor
 */
#include <iostream>

using namespace std;

int main()
{

	/**
	 * Initialization of numbers takes place here
	 */

	int length,area,perimeter;
	length = 20;
	/**
	 * calculation takes place here
	 */

	area=length^2;
	perimeter=4*length;


	/**
	 * display of numbers which are calculated
	 */

	cout<<"area of square is:"<<endl;
	cout<< area <<endl;

	cout<<"perimeter of square is:"<<endl;
	cout<< perimeter;


}



