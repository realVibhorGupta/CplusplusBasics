/*
 * commandline.cpp
 *
 *  Created on: Jan 28, 2016
 *      Author: vibhor
 */

/*This is a C++ sample code for command line arguments of passing arguments to main function
  A program starts by calling main().When this is done ,main() is given two arguments specifying
  the number of arguments,usually called argc,and an array of arguments,usually called argv.
  The name of the program8(as if occurs on the command line) is passed as argv[0] ,so argc is
  always at least 1.
  You can run this program in terminal with several arguments,each argument is separated by the
  space.Then the program will print the arguments in the terminal.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
  if(argc == 1)
  {
     cout<<"No arguments.You should run this program in terminal with several arguments."<<endl;
     exit(1);
  }
  else
  { /*for loop,each loop print a argument once a time.Note that the loop begin with argv[1],
    because argv[0] represent the program's name.*/
    cout<<"The arguments you put are:"<<endl;
	  for(int i=1;i<argc;i++)
		  cout<<argv[i]<<endl;
	  cin.get();
	  return 0;
  }
}
