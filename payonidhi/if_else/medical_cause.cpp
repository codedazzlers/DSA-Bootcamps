#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"do you suffer medical illnes(y/n): "<<endl;
  cin>>ch;
  int a;
  a = ch;
  if(a==121){
      cout<<"You are allowed to sit in exam"<<endl;
  }
  else
   cout<<"You are not allowed to sit in exam"<<endl;
   return 0;
}
