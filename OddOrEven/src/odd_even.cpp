/*
 * odd_even.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: vibhor
 */
#include <limits>
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	char a='A';
	char b='a';
	if((n!=a)&&(n!=b))
	{

		if(n%2==0){
		cout<<"NUMBER IS EVEN";


		}else{
		cout<<"NUMBER IS ODD";

			}
	}
	return 0;


}

