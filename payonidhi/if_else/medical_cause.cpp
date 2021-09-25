#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"do you suffer medical illnes(y/n): "<<endl;
  cin>>ch;

  if(ch=='y'){
      cout<<"You are allowed to sit in exam"<<endl;
  }
  else
   cout<<"You are not allowed to sit in exam"<<endl;
   return 0;
}
