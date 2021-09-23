#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"Enter any alphabet"<<endl;
  cin>>ch;
  int x;
  x = ch;
  if((x>=97) && (x<=122)){
      cout<<"lower case alphabet"<<endl;
  }
  else if ((x>=65) && (x<=90)){
      cout<<"upper case alphabet"<<endl;
  }
  else
  cout<<"You entered wrong character!"<<endl;
   return 0;
}
