#include <iostream>

using namespace std;


int main()
{
    int n, last, first ;

 
  cout<<"Enter any number: ";
    cin>>n;
    last = n % 10;
    first=n;
    while(first>=10)
    {
    first=first/10;
    }
cout<<endl<<"First Digit OF The Following Number Is:" <<first<<endl;
cout<<"Last Digit OF The Following Number Is:" <<last;

}