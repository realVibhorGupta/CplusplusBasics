/*
 * exceptionhandling.cpp
 *
 *  Created on: Feb 5, 2016
 *      Author: vibhor
 */

#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
   int a,b;
   float  d;

   cout<<"Enter the value of a:";
   cin>>a;
   cout<<"Enter the value of b:";
   cin>>b;

   try
   {
              if(b!=0)
              {
                 d=a/b;
                 cout<<"Result is:"<<d;
              }
              else
              {
                 throw(b);
              }
   }

   catch(int i)
   {
              cout<<"Answer is infinite because b is:"<<b<<i;
   }

   getch();
}
