#include <iostream>
using namespace std;
int main() {
  int age;
  char gender;
  char marital_status;
  cout<<"Enter your age"<<endl;
  cin>>age;
  cout<<"Enter your gender(f/m)"<<endl;
  cin>>gender;
  cout<<"Enter your marital status(y/n)"<<endl;
  cin>>marital_status;
  
  if((gender=='f') || (gender=='F')){
      cout<<"Female are to work only in urban areas"<<endl;
  }
  else if(((gender=='m') || (gender=='M')) && ((age>=20) && (age<=40))){
      cout<<"May work anywhere"<<endl;
  }
  else if(((gender=='m') || (gender=='M')) && ((age>=40) && (age<=60))){
      cout<<"May work only in urban area"<<endl;
  }
  else
  cout<<"Error!"<<endl;
   return 0;
}
