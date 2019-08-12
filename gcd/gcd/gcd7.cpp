/*
 * gcd7.cpp
 *
 *  Created on: Jan 24, 2016
 *      Author: vibhor
 */


#include<iostream>

using namespace std;

int  main() {

	int  t,a,b;
	cout<<"Enter the 1st number";
	cin>>a;

	cout<<"Enter the 2nd number";
	cin>>b;

	if(a<=b)
	{

	int temp=a;
		a=b;
		b=temp;

	}


	 while(!(b==0))
	    {

	        t=a%b;
	        a=b;
	        b=t;

	    }



}

