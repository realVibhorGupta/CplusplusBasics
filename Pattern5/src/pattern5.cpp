/*
 * pattern5.cpp
 *pattern12 are same
 *  Created on: Jan 31, 2016
 *      Author: vibhor
 */



#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l;


	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)

		{

			cout<<" ";

		}
		for(k=1;k<=(2*i-1);k++){
		cout<<"*";
		}
		cout<<endl;
	}


}


