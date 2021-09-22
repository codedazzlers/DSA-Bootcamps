/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int l,b;
  cout << "Enter Value of Length " << endl;
  cin>>l;
  cout <<endl << "Enter Vaue of Breadth " << endl;
  cin>>b;
  if(l==b)
  {
      cout <<endl << "Following values are dimension of square";
  }
  else
  {
      cout <<endl << "Following values are dimension of rectangle";  
  }
}
