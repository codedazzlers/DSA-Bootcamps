#include <iostream>
using namespace std;
int main() {
  int year;
  cout<<"Enter any year"<<endl;
  cin>>year;
  if(year%4==0){
    if(year %100 == 0){
      if(year%400==0){
        cout<<"This is a leap year!"<<endl;
      }
      else
      cout<<"This is not a leap year!"<<endl;
    }
    else
      cout<<"This is a leap year!"<<endl;
  }
  else
  cout<<"This is not a leap year!"<<endl;
   return 0;
}
