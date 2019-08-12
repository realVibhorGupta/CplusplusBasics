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
  int n, n1, rem, num=0;
  cout << "Enter a positive  integer: ";
  cin >> n;
  n1=n;
  while(n1!=0)
  {
      rem=n1%10;
      num+=rem*rem*rem;
      n1/=10;
  }
  if(num==n)
    cout << n << " is an Armstrong number.";
  else
    cout << n << " is not an Armstrong number.";
  return 0;
}
