#include <iostream>
using namespace std;

int main() {
  int l,b;
  cout<<"Enter the values of length and breadth\n";
  cin>>l>>b;
  if(l==b){
      cout<<"square";
  }
  else{
      cout<<"rectangle";
  }

  return 0;
}