#include <iostream>

using namespace std;

int main()
{
 int n,count=1;
 cout<< "Enter a limit of even numbers to count: ";
 cin>>n;
 cout<<endl<< "Even numbers are:"<<endl;
 while(count<=n)
 {
    cout<< count <<"\t";
    count+=2;
 }
}
