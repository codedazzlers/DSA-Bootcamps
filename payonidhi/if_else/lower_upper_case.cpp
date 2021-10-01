#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"Enter any alphabet"<<endl;
  cin>>ch;
  
  if((ch>='a') && (ch<='z')){
      cout<<"lower case alphabet"<<endl;
  }
  else if ((ch>='A') && (ch<='Z')){
      cout<<"upper case alphabet"<<endl;
  }
  else
  cout<<"You entered wrong character!"<<endl;
   return 0;
}
