/*
 * math_function.cpp
 *
 *  Created on: Jan 28, 2016
 *      Author: vibhor
 */

#include <iostream>
#include <math.h>
using namespace  std;

int main()
{
	double number=2.0;
	double number2=3.0;

	//Returns the arc cosine value.
	cout<<acos(number)<<endl;

	//Returns the arc tangent value.
	cout<<atan(number)<<endl;

	//Returns the cosine value.
	cout<<cos(number)<<endl;

	//Returns the hyperbolic cosine value.
	cout<<cosh(number)<<endl;

	//Returns the arc tangent of y/x.
	cout<<atan2(number,number2)<<endl;

	//Returns the smallest integer not 	less than the given value.
	cout<<ceil(3.8)<<endl;

	//Returns the natural logarithm base 	"e" raised to the 	argument 		value.
	cout<<exp(number)<<endl;

	//Returns the absolute value of the 	num.
	cout<<abs(3.9)<<endl;

	//Returns the largest Integer not greater than the given value.
	cout<<floor(2.1)<<endl;

	//Returns the remainder of two values.
	cout<<fmod(number,number2)<<endl;



	//Returns the value of the number * 2 to the power of "exp"
	cout<<ldexp(number,4)<<endl;

	//Returns the natural algorithm for the given value.
	cout<<log(number)<<endl;

	//Returns the base 10 algorithm for a number.
	cout<<log10(number)<<endl;



	//Returns the exponential value.
	cout<<pow(number,number2)<<endl;

	//Return the sine value for the argument.
	cout<<sin(number)<<endl;


	//Return the hyperbolic sine value for the argument.
	cout<<sinh(number)<<endl;

	//Returns the square root of the argument.
	cout<<sqrt(number)<<endl;

	//Return the hyperbolic tangent value for the argument.
	cout<<tanh(number)<<endl;

	//Return the tangent value for the argument.
	cout<<tan(number)<<endl;

}


