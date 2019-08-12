/*
 * largest_smallest_number.cpp
 *
 *  Created on: Jan 22, 2016
 *      Author: vibhor
 */

#include<iostream>

using namespace std;

int main()
{
	/**declaration of the  integers
	 *
	 */
	int first_number, second_number, third_number ,fourth_number;


	cout<< "Enter first number ";
	cin>>first_number;

	cout<<"Enter second number";
	cin>>second_number;

	cout<<"Enter third number";
	cin>>third_number;


	cout<<"Enter fourth number";
	cin>>fourth_number;

	/**
	 * check whether the number is greatest and smallest
	 */
	if((first_number > second_number)&&(first_number>second_number)&&(first_number>third_number)  )
	{
		cout<<"first number is greatest";
	}else if((second_number > first_number) &&(second_number>  third_number) &&(second_number > fourth_number))
	{
		cout<<"second number is greatest";
	}else if((third_number > second_number) && (third_number> first_number) && (third_number>fourth_number))
	{
		cout<<"third number is greatest";

	}else
	cout<<"fourth number is greatest";

	if((first_number < second_number) && (first_number< third_number) &&(first_number< fourth_number) )
	{
		cout<<"first number is smallest";
	}else if((second_number < first_number) && (second_number <third_number) &&(second_number< fourth_number))
	{
		cout<<"second number is smallest";
	}else if((third_number < second_number) &&(third_number<  first_number) &&(third_number< fourth_number))
	{
		cout<<"third number is smallest";

	}else
	cout<<"\n fourth number is smallest";
}


