/*
 * area_and_parameter_of_rectangle.cpp
 *
 *  Created on: Jan 20, 2016
 *      Author: vibhor
 */
#include <iostream>

using namespace std;

int main()
{


	/**
	 * declaration of variables
	 */
	int length,breadth,area,perimeter;
		/**
		 * Initialization of numbers takes place here
		 */
	length = 20;
	breadth= 4;

		/**
		 * calculation takes place here
		 */

	area=length*breadth;
	perimeter=2*(length+breadth);
		/**
		 * display of numbers which are calculated
		 */

	cout<<"area of rectangle is:"<<endl;
	cout<< area <<endl;

	cout<<"perimeter of rectangle is:"<<endl;
	cout<< perimeter;


}



