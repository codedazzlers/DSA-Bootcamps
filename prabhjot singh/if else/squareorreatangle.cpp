//to check given dimensions are of square or ractangle
#include<iostream>
using namespace std;
int main()
{float L,B;              //L-length B-breadth
cout<<"enter lenth of rectangle";
cin>>L;
cout<<"enter breadth of rectangle";
cin>>B;
if(L==B)
{cout<<"It is a square";}
else
cout<<"It is a rectanle";
return 0;
}