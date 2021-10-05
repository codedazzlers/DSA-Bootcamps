#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{ char x;
  cout<<"enter any character:";
  cin>>x;
  if(islower(x))
   cout<<"enter character is of lowercase";
  else 
   cout<<"enter character is of uppercase";

    return 0;
}